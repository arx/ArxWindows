	SetCompressor /SOLID LZMA 

	!define MULTIUSER_EXECUTIONLEVEL Highest
	!define MULTIUSER_MUI
	!define MULTIUSER_INSTALLMODE_DEFAULT_REGISTRY_KEY "Software\Arx Libertatis"
	!define MULTIUSER_INSTALLMODE_DEFAULT_REGISTRY_VALUENAME "InstallLocation"
	!define MULTIUSER_INSTALLMODE_INSTDIR_REGISTRY_KEY "Software\Arx Libertatis"
	!define MULTIUSER_INSTALLMODE_INSTDIR_REGISTRY_VALUENAME "InstallLocation"
	!define MULTIUSER_INSTALLMODE_INSTDIR "Arx Libertatis"

	!define MULTIUSER_USE_PROGRAMFILES${TARGET}

	!include "MultiUserCustom.nsh"		; Modified "MultiUser.nsh" to allow installation to "C:\Program Files\Arx Libertatis" on x64
	!include "MUI2.nsh"
	!include "nsDialogs.nsh"
	!include "LogicLib.nsh"
	!include "x64.nsh"

;--------------------------------
;Define checks

	!ifndef VERSION
		!error "VERSION not defined."
	!endif

	!ifndef TARGET
		!error "TARGET not defined."
	!endif

	!ifndef ARCH
		!error "ARCH not defined."
	!endif

;--------------------------------
;General

	Name          "Arx Libertatis"
	OutFile       "arxlibertatis_${VERSION}_${ARCH}.exe"
	Icon          data\arx-libertatis.ico
	UninstallIcon data\arx-libertatis.ico
	InstallDir    "$PROGRAMFILES\Arx Libertatis"
	BrandingText  " "

;--------------------------------
;Variables

	Var StartMenuFolder

;--------------------------------
;Version Info

	VIAddVersionKey  "ProductName"     "Arx Libertatis"
	VIAddVersionKey  "ProductVersion"  "${VERSION}"
	VIAddVersionKey  "FileVersion"     "${VERSION}"
	VIAddVersionKey  "FileDescription" "Arx Libertatis installer"
	VIAddVersionKey  "LegalCopyright"  "Copyright 2011 Arx Libertatis Team"
	VIProductVersion "${VERSION}.0.0"
	
;--------------------------------
;Interface Settings

	!define MUI_ICON "data\arx-libertatis.ico"
	!define MUI_UNICON "data\arx-libertatis.ico"
	!define MUI_WELCOMEFINISHPAGE_BITMAP "data\side.bmp"
	!define MUI_UNWELCOMEFINISHPAGE_BITMAP "data\side.bmp"
	!define MUI_ABORTWARNING
	!define MUI_COMPONENTSPAGE_NODESC 

;--------------------------------
;Language Selection Dialog Settings

	;Remember the installer language
	!define MUI_LANGDLL_REGISTRY_ROOT "SHCTX" 
	!define MUI_LANGDLL_REGISTRY_KEY "Software\Arx Libertatis" 
	!define MUI_LANGDLL_REGISTRY_VALUENAME "Installer Language"

;--------------------------------
;Pages

	!insertmacro MUI_PAGE_WELCOME
	!insertmacro MUI_PAGE_COMPONENTS
	!insertmacro MULTIUSER_PAGE_INSTALLMODE
	!insertmacro MUI_PAGE_DIRECTORY

	;Start Menu Folder Page Configuration
	!define MUI_STARTMENUPAGE_REGISTRY_ROOT "SHCTX" 
	!define MUI_STARTMENUPAGE_REGISTRY_KEY "Software\Arx Libertatis" 
	!define MUI_STARTMENUPAGE_REGISTRY_VALUENAME "Start Menu Folder"
	!define MUI_STARTMENUPAGE_DEFAULTFOLDER "Arx Libertatis"

	!insertmacro MUI_PAGE_STARTMENU Application $StartMenuFolder

	!insertmacro MUI_PAGE_INSTFILES

	!define MUI_FINISHPAGE_RUN "$INSTDIR\arx.exe"
	!insertmacro MUI_PAGE_FINISH

	!insertmacro MUI_UNPAGE_CONFIRM
	!insertmacro MUI_UNPAGE_INSTFILES

;--------------------------------
;Languages

	!insertmacro MUI_LANGUAGE "English"

;----------------------------------------------------------------------------
Section "Arx Libertatis"

	InitPluginsDir
	SectionIn RO

	; Set output path to the installation directory.
	SetOutPath $INSTDIR

	;----------------------------------------------------------------------------
	; Executable and required DLLs
	;----------------------------------------------------------------------------
	File arx.exe
	File ..\libs\devil\bin\DevIL${TARGET}.dll
	File ..\libs\sdl\bin\SDL${TARGET}.dll

	;----------------------------------------------------------------------------
	; OpenAL
	;----------------------------------------------------------------------------
	File /oname=$PLUGINSDIR\oalinst.exe openal\oalinst.exe
	ExecWait '"$PLUGINSDIR\oalinst.exe" /s /r' $1
	${If} $1 == 0
		; Success!
	${ElseIf} $1 == 1
		; Success, but reboot required
		SetRebootFlag true
	${Else}
		; Failed!
		MessageBox MB_OK|MB_ICONSTOP "OpenAL installation failed!"
		Abort
	${EndIf}
	
	;----------------------------------------------------------------------------
	; VC++ 2010 Redistributable
	;----------------------------------------------------------------------------
	ReadRegStr $0 HKLM "SOFTWARE\Microsoft\VisualStudio\10.0\VC\VCRedist\${ARCH}" 'Installed'
	${If} $0 == 0
		GetTempFileName $0
		File /oname=$PLUGINSDIR\vcredist_${ARCH}.exe vcredist\vcredist_${ARCH}.exe
		ExecWait '"$PLUGINSDIR\vcredist_${ARCH}.exe" /passive /norestart' $1
		
		${If} $1 == 0
			; Success!
		${ElseIf} $1 == 3010
			; Success, but reboot required
			SetRebootFlag true
		${Else}
			; Failed!
			MessageBox MB_OK|MB_ICONSTOP "Visual C++ 2010 Redistributable installation failed!"
			Abort
		${EndIf}
	${EndIf}

	;Store installation folder
	WriteRegStr SHCTX "Software\Arx Libertatis" "" $INSTDIR

	;Create uninstaller
	WriteUninstaller "$INSTDIR\Uninstall.exe"

	;Add uninstall information
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "DisplayName" "Arx Libertatis" 
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "DisplayIcon" "$\"$INSTDIR\arx.exe$\""
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "UninstallString" "$\"$INSTDIR\Uninstall.exe$\""
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "QuietUninstallString" "$\"$INSTDIR\Uninstall.exe$\" /S"
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "URLInfoAbout" "http://arx.parpg.net/"
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "DisplayVersion" "${VERSION}"
	WriteRegDWORD SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "NoModify" 1
	WriteRegDWORD SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis" "NoRepair" 1

	IfRebootFlag 0 noreboot
	MessageBox MB_YESNO|MB_ICONQUESTION "A reboot is required to finish the installation. Do you wish to reboot now?" IDNO noreboot
		Reboot

noreboot:

SectionEnd

Section -StartMenu
	!insertmacro MUI_STARTMENU_WRITE_BEGIN Application
		CreateDirectory "$SMPROGRAMS\$StartMenuFolder"
		CreateShortCut "$SMPROGRAMS\$StartMenuFolder\Play Arx Libertatis.lnk" "$INSTDIR\arx.exe"
		CreateShortCut "$SMPROGRAMS\$StartMenuFolder\Uninstall.lnk" "$INSTDIR\Uninstall.exe"
	!insertmacro MUI_STARTMENU_WRITE_END
SectionEnd

Section "Create a desktop icon" Desktop
	CreateShortCut "$DESKTOP\Arx Libertatis.lnk" "$INSTDIR\arx.exe"
SectionEnd

Section "Create a Quick Launch icon" QuickLaunch
	CreateShortCut "$QUICKLAUNCH\Arx Libertatis.lnk" "$INSTDIR\arx.exe"
SectionEnd 

;--------------------------------
;Installer Functions

Function .onInit
	SetRegView ${TARGET}

	!insertmacro MULTIUSER_INIT
FunctionEnd


; TODO Copy data & savegames
; Steam App 1700, 
; HKCU\SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\XXXXX "InstallLocation"
; HKCU\SOFTWARE\Wow6432Node\Microsoft\Windows\CurrentVersion\Uninstall\XXXXX "InstallLocation"
; HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\XXXXX "InstallLocation"
; HKLM\SOFTWARE\Wow6432Node\Microsoft\Windows\CurrentVersion\Uninstall\XXXXX "InstallLocation"
; HKCU "SOFTWARE\Arkane Studios\Installed Apps\arx fatalis" "Folder"
; HKCU "SOFTWARE\Wow6432Node\Arkane Studios\Installed Apps\arx fatalis" "Folder"
; HKLM "SOFTWARE\Arkane Studios\Installed Apps\arx fatalis" "Folder"
; HKLM "SOFTWARE\Wow6432Node\Arkane Studios\Installed Apps\arx fatalis" "Folder"


;--------------------------------
;Uninstaller Section

Section "Uninstall"

	Delete arx.exe
	Delete DevIL${TARGET}.dll
	Delete SDL${TARGET}.dll

	Delete "$INSTDIR\Uninstall.exe"

	RMDir "$INSTDIR"

	!insertmacro MUI_STARTMENU_GETFOLDER Application $StartMenuFolder

	Delete "$SMPROGRAMS\$StartMenuFolder\Play Arx Libertatis.lnk"
	Delete "$SMPROGRAMS\$StartMenuFolder\Uninstall.lnk"
	RMDir  "$SMPROGRAMS\$StartMenuFolder"

	Delete "$DESKTOP\Arx Libertatis.lnk"
	Delete "$QUICKLAUNCH\Arx Libertatis.lnk"

	DeleteRegKey SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\Arx Libertatis"
	DeleteRegKey /ifempty SHCTX "Software\Arx Libertatis"

SectionEnd

;--------------------------------
;Uninstaller Functions

Function un.onInit

	SetRegView ${TARGET}

	!insertmacro MULTIUSER_UNINIT
	!insertmacro MUI_UNGETLANGUAGE
	
FunctionEnd
