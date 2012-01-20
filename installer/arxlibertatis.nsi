	SetCompressor /SOLID LZMA 

	!define MULTIUSER_EXECUTIONLEVEL Highest
	!define MULTIUSER_MUI
	!define MULTIUSER_INSTALLMODE_DEFAULT_REGISTRY_KEY "Software\ArxLibertatis"
	!define MULTIUSER_INSTALLMODE_DEFAULT_REGISTRY_VALUENAME "InstallLocation"
	!define MULTIUSER_INSTALLMODE_INSTDIR_REGISTRY_KEY "Software\ArxLibertatis"
	!define MULTIUSER_INSTALLMODE_INSTDIR_REGISTRY_VALUENAME "InstallLocation"
	!define MULTIUSER_INSTALLMODE_INSTDIR "Arx Libertatis"

	!define MULTIUSER_USE_PROGRAMFILES${TARGET}

	!include "MultiUserCustom.nsh"		; Modified "MultiUser.nsh" to allow installation to "C:\Program Files\Arx Libertatis" on x64
	!include "Winver.nsh"
	!include "MUI2.nsh"
	!include "nsDialogs.nsh"
	!include "LogicLib.nsh"
	!include "x64.nsh"

	!include "UninstallLog.nsh"
	!include "ArxFatalisData.nsh"	

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
	Var ArxFatalisInstallDir

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
	!define MUI_LANGDLL_REGISTRY_KEY "Software\ArxLibertatis" 
	!define MUI_LANGDLL_REGISTRY_VALUENAME "Installer Language"

;--------------------------------
;Pages

	!insertmacro MUI_PAGE_WELCOME
	!insertmacro MUI_PAGE_COMPONENTS
	!insertmacro MULTIUSER_PAGE_INSTALLMODE
	!insertmacro MUI_PAGE_DIRECTORY

	;Start Menu Folder Page Configuration
	!define MUI_STARTMENUPAGE_REGISTRY_ROOT "SHCTX" 
	!define MUI_STARTMENUPAGE_REGISTRY_KEY "Software\ArxLibertatis" 
	!define MUI_STARTMENUPAGE_REGISTRY_VALUENAME "Start Menu Folder"
	!define MUI_STARTMENUPAGE_DEFAULTFOLDER "Arx Libertatis"

	!insertmacro MUI_PAGE_STARTMENU Application $StartMenuFolder

	!define MUI_DIRECTORYPAGE_VARIABLE          $ArxFatalisInstallDir
	!define MUI_DIRECTORYPAGE_TEXT_DESTINATION  "Arx Fatalis Location"
	!define MUI_DIRECTORYPAGE_TEXT_TOP          "In order to play Arx Libertatis, you need to have the original data from Arx Fatalis. You can also play using the demo data. Please specify the location of the original Arx Fatalis installation where *.pak files can be found. Those files (along with a few others) will be copied to your Arx Libertatis install directory. If you don't have the Arx Fatalis data yet, leave this field empty. You can always copy the data files later."
	!define MUI_PAGE_HEADER_TEXT                "Specify Data Location"
	!define MUI_PAGE_HEADER_SUBTEXT             "Please specify the location of the original Arx Fatalis data"
	!insertmacro MUI_PAGE_DIRECTORY
 
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
	${SetOutPath} $INSTDIR

	;----------------------------------------------------------------------------
	; Executable and required DLLs
	;----------------------------------------------------------------------------
	${File} "." arx.exe
	${File} "." arxunpak.exe
	${File} "..\libs\devil\bin\" DevIL${TARGET}.dll
	${File} "..\libs\sdl\bin\" SDL${TARGET}.dll

	${CopyArxData} $ArxFatalisInstallDir "" "data.pak" 238293
	${CopyArxData} $ArxFatalisInstallDir "" "data2.pak" 2164
	${CopyArxData} $ArxFatalisInstallDir "" "loc_default.pak" 205
	${CopyArxData} $ArxFatalisInstallDir "" "sfx.pak" 44134
	${CopyArxData} $ArxFatalisInstallDir "" "speech_default.pak" 342201

	${CreateDirectory} "$INSTDIR\graph"
	${CreateDirectory} "$INSTDIR\graph\interface"
	${CreateDirectory} "$INSTDIR\graph\obj3d"
	${CreateDirectory} "$INSTDIR\graph\textures"

	${CopyArxData} $ArxFatalisInstallDir "graph\interface\misc\" "*.*" 1800
	${CopyArxData} $ArxFatalisInstallDir "graph\obj3d\textures\" "*.*" 1522
	${CopyArxData} $ArxFatalisInstallDir "misc\" "*.*" 7612
	
	;
	; DirectX
	;
	${SetOutPath} $PLUGINSDIR\dxsetup
	CreateDirectory $PLUGINSDIR\dxsetup
	DetailPrint "Installing required DirectX components"
	File dxsetup\DSETUP.dll
	File dxsetup\dsetup32.dll
	File dxsetup\DXSETUP.exe
	File dxsetup\dxupdate.cab
	File dxsetup\Jun2010_D3DCompiler_43_${ARCH}.cab
	File dxsetup\Jun2010_d3dx9_43_${ARCH}.cab
	File dxsetup\Jun2010_XAudio_${ARCH}.cab
	ExecWait '"$PLUGINSDIR\dxsetup\dxsetup.exe" /silent' $1
	${If} $1 == 0
		; Success!
	${Else}
		; Failed!
		MessageBox MB_OK|MB_ICONSTOP "DirectX installation failed with error $1!"
		Abort
	${EndIf}

	;----------------------------------------------------------------------------
	; OpenAL
	;----------------------------------------------------------------------------
	DetailPrint "Installing OpenAL"
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
		DetailPrint "Installing VC++ 2010 Redistributable"
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

	;Create uninstaller
	${WriteUninstaller} "$INSTDIR\Uninstall.exe"

	;Store installation folder
	WriteRegStr SHCTX "Software\ArxLibertatis" "InstallLocation" $INSTDIR
	WriteRegStr SHCTX "Software\ArxLibertatis" "DataDir" $INSTDIR

	;Add uninstall information
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "DisplayName" "Arx Libertatis" 
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "DisplayIcon" "$\"$INSTDIR\arx.exe$\""
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "UninstallString" "$\"$INSTDIR\Uninstall.exe$\""
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "QuietUninstallString" "$\"$INSTDIR\Uninstall.exe$\" /S"
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "URLInfoAbout" "http://arx.parpg.net/"
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "DisplayVersion" "${VERSION}"
	WriteRegDWORD SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "NoModify" 1
	WriteRegDWORD SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "NoRepair" 1

	IfRebootFlag 0 noreboot
	MessageBox MB_YESNO|MB_ICONQUESTION "A reboot is required to finish the installation. Do you wish to reboot now?" IDNO noreboot
		Reboot

noreboot:

SectionEnd

Section -StartMenu
	!insertmacro MUI_STARTMENU_WRITE_BEGIN Application
		${CreateDirectory} "$SMPROGRAMS\$StartMenuFolder"
		${CreateShortCut} "$SMPROGRAMS\$StartMenuFolder\Play Arx Libertatis.lnk" "$INSTDIR\arx.exe"
		${CreateShortCut} "$SMPROGRAMS\$StartMenuFolder\Uninstall.lnk" "$INSTDIR\Uninstall.exe"
	!insertmacro MUI_STARTMENU_WRITE_END
SectionEnd

Section "Create a desktop icon" Desktop
	${CreateShortCut} "$DESKTOP\Arx Libertatis.lnk" "$INSTDIR\arx.exe"
SectionEnd

Section "Create a Quick Launch icon" QuickLaunch
	${CreateShortCut} "$QUICKLAUNCH\Arx Libertatis.lnk" "$INSTDIR\arx.exe"
SectionEnd 

;--------------------------------
;Installer Functions

Function .onInit
	; Check for >= Windows XP SP2
	${IfNot} ${AtLeastWinVista}
		${IfNot} ${IsWinXP}
		${OrIfNot} ${AtLeastServicePack} 2
  		MessageBox MB_OK|MB_ICONEXCLAMATION "Arx Libertatis requires Windows XP Service Pack 2 or later."
  		Abort
  	${EndIf}	
	${EndIf}
	
	; Ensure the x64 version can't be installed on a 32-bit OS
	${IfNot} ${RunningX64}
		StrCmp ${TARGET} "64" Win64Install Win32Install
Win64Install:
		MessageBox MB_OK|MB_ICONEXCLAMATION "Arx Libertatis for x64 can't be installed on a 32-bit OS."
		Abort
Win32Install:
	${EndIf}

	SetRegView ${TARGET}

	!insertmacro MULTIUSER_INIT

	Call FindArxInstall
	StrCpy $ArxFatalisInstallDir $0 

FunctionEnd


;--------------------------------
;Uninstaller Section

Section "Uninstall"

	; This will handle all files to uninstall
	; Registry keys to remove are handled manually below
	Call un.AutoUninstallFromLogFile

	;Delete "$INSTDIR\arx.exe"
	;Delete "$INSTDIR\DevIL${TARGET}.dll"
	;Delete "$INSTDIR\SDL${TARGET}.dll"

	;Delete "$INSTDIR\Uninstall.exe"

	;RMDir "$INSTDIR"

	;!insertmacro MUI_STARTMENU_GETFOLDER Application $StartMenuFolder

	DeleteRegKey SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis"
	DeleteRegKey /ifempty SHCTX "Software\ArxLibertatis"

SectionEnd

;--------------------------------
;Uninstaller Functions

Function un.onInit

	SetRegView ${TARGET}

	!insertmacro MULTIUSER_UNINIT
	!insertmacro MUI_UNGETLANGUAGE
	
FunctionEnd
