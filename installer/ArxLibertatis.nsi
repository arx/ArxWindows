;------------------------------------------------------------------------------
; Copyright 2011-2012 Arx Libertatis Team (see the AUTHORS file)
;
; This file is part of Arx Libertatis.
;
; Arx Libertatis is free software: you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation, either version 3 of the License, or
; (at your option) any later version.
;
; Arx Libertatis is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.
;
; You should have received a copy of the GNU General Public License
; along with Arx Libertatis.  If not, see <http://www.gnu.org/licenses/>.
;------------------------------------------------------------------------------

;------------------------------------------------------------------------------
; Arx Libertatis installer script for Windows 32/64 bits
;
; To build an installer you'll need NSIS and the md5 plugin
;	* http://nsis.sourceforge.net
;	* http://nsis.sourceforge.net/MD5_plugin
;------------------------------------------------------------------------------

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

;------------------------------------------------------------------------------
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

;------------------------------------------------------------------------------
;General

	Name          "Arx Libertatis"
	OutFile       "ArxLibertatis_${VERSION}_${ARCH}.exe"
	Icon          data\ArxLibertatis.ico
	UninstallIcon data\ArxLibertatis.ico
	InstallDir    "$PROGRAMFILES\Arx Libertatis"
	BrandingText  " "

;------------------------------------------------------------------------------
;Variables

	Var StartMenuFolder
	Var ArxFatalisInstallDir
	Var ArxFatalisLanguage

;------------------------------------------------------------------------------
;Version Info

	VIAddVersionKey  "ProductName"     "Arx Libertatis"
	VIAddVersionKey  "CompanyName"     "Arx Libertatis"
	VIAddVersionKey  "ProductVersion"  "${VERSION}"
	VIAddVersionKey  "FileVersion"     "${VERSION}"
	VIAddVersionKey  "FileDescription" "Arx Libertatis installer"
	VIAddVersionKey  "LegalCopyright"  "Copyright 2012 Arx Libertatis Team"
	VIProductVersion "${VERSION}.0"
	
;------------------------------------------------------------------------------
;Interface Settings

	!define MUI_ICON "data\ArxLibertatis.ico"
	!define MUI_UNICON "data\ArxLibertatis.ico"
	!define MUI_WELCOMEFINISHPAGE_BITMAP "data\Side.bmp"
	!define MUI_UNWELCOMEFINISHPAGE_BITMAP "data\Side.bmp"
	!define MUI_ABORTWARNING
	!define MUI_COMPONENTSPAGE_NODESC 

;------------------------------------------------------------------------------
;Language Selection Dialog Settings

	;Remember the installer language
	!define MUI_LANGDLL_REGISTRY_ROOT "SHCTX" 
	!define MUI_LANGDLL_REGISTRY_KEY "Software\ArxLibertatis" 
	!define MUI_LANGDLL_REGISTRY_VALUENAME "Installer Language"

;------------------------------------------------------------------------------
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
	!define MUI_DIRECTORYPAGE_VERIFYONLEAVE
	!define MUI_PAGE_CUSTOMFUNCTION_LEAVE       DetectArx
	!insertmacro MUI_PAGE_DIRECTORY
	!insertmacro MUI_PAGE_INSTFILES
	!define MUI_FINISHPAGE_NOAUTOCLOSE

	!define MUI_FINISHPAGE_RUN "$INSTDIR\arx.exe"
	!insertmacro MUI_PAGE_FINISH

	!insertmacro MUI_UNPAGE_CONFIRM
	!insertmacro MUI_UNPAGE_INSTFILES

;------------------------------------------------------------------------------
;Languages

	!insertmacro MUI_LANGUAGE "English"

;------------------------------------------------------------------------------
Section "Arx Libertatis"
	
	SetDetailsPrint listonly
	
	InitPluginsDir
	SectionIn RO

	; Set output path to the installation directory.
	${SetOutPath} $INSTDIR

	;----------------------------------------------------------------------------
	; Executable and required DLLs
	;----------------------------------------------------------------------------
	SetDetailsPrint both
	DetailPrint "Installing Arx Libertatis binaries..."
	SetDetailsPrint listonly
	${File} "${BUILD_OUTPUT_DIR}" arx.exe
	${File} "${BUILD_OUTPUT_DIR}" arx.pdb
	${File} "${BUILD_OUTPUT_DIR}" arxsavetool.exe
	${File} "${BUILD_OUTPUT_DIR}" arxunpak.exe
	${File} "${BUILD_OUTPUT_DIR}" arxcrashreporter.exe
	${File} "..\libs\sdl\bin\" SDL${TARGET}.dll
	${File} "..\libs\dbghelp\bin\${ARCH}" dbghelp.dll
	${File} "..\libs\dbghelp\bin\${ARCH}" symsrv.dll
	${File} "${QT_BIN_DIR}" QtCore4.dll
	${File} "${QT_BIN_DIR}" QtGui4.dll
	${File} "${QT_BIN_DIR}" QtNetwork4.dll

	;----------------------------------------------------------------------------
	; Arx Fatalis data copy
	;----------------------------------------------------------------------------
	${If} $ArxFatalisInstallDir != ""
		SetDetailsPrint both
		DetailPrint "Copying Arx Fatalis data files..."
		SetDetailsPrint listonly
		${CopyArxDataFiles} $ArxFatalisInstallDir $ArxFatalisLanguage
	${EndIf}
	
	;----------------------------------------------------------------------------
	; OpenAL
	;----------------------------------------------------------------------------
	SetDetailsPrint both
	DetailPrint "Installing OpenAL..."
	SetDetailsPrint listonly
	File /oname=$INSTDIR\OpenAL32.dll "openal\soft_oal${TARGET}.dll"
	File /oname=$PLUGINSDIR\oalinst.exe openal\oalinst.exe
	ExecWait '"$PLUGINSDIR\oalinst.exe" /s /r' $1
	${If} $1 == 0
		; Success!
	${ElseIf} $1 == 1
		; Success, but reboot required
		SetRebootFlag true
	${Else}
		; Failed!
		MessageBox MB_OK|MB_ICONSTOP "OpenAL installation failed with error $1!"
		Abort
	${EndIf}
	
	;----------------------------------------------------------------------------
	; VC++ 2010 Redistributable
	;----------------------------------------------------------------------------
	SetDetailsPrint both
	DetailPrint "Installing VC++ 2010 Redistributable..."
	SetDetailsPrint listonly
	File /oname=$PLUGINSDIR\vcredist_${ARCH}.exe vcredist\vcredist_${ARCH}.exe
	ExecWait '"$PLUGINSDIR\vcredist_${ARCH}.exe" /q /norestart' $1
	${If} $1 == 0
		; Success!
	${ElseIf} $1 == 3010
		; Success, but reboot required
		SetRebootFlag true
	${ElseIf} $1 == 5100
		; Later version already installed
	${Else}
		; Failed!
		MessageBox MB_OK|MB_ICONSTOP "Visual C++ 2010 Redistributable installation failed with error $1!"
		Abort
	${EndIf}

	;----------------------------------------------------------------------------
	; Create uninstaller
	;----------------------------------------------------------------------------
	${WriteUninstaller} "$INSTDIR\Uninstall.exe"

	;----------------------------------------------------------------------------
	; Registry fun
	;----------------------------------------------------------------------------
	; Store installation folder
	WriteRegStr SHCTX "Software\ArxLibertatis" "InstallLocation" $INSTDIR
	WriteRegStr SHCTX "Software\ArxLibertatis" "DataDir" $INSTDIR

	; Add uninstall information
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "DisplayName" "Arx Libertatis" 
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "DisplayIcon" "$\"$INSTDIR\arx.exe$\""
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "UninstallString" "$\"$INSTDIR\Uninstall.exe$\""
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "QuietUninstallString" "$\"$INSTDIR\Uninstall.exe$\" /S"
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "URLInfoAbout" "http://arx-libertatis.org/"
	WriteRegStr SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "DisplayVersion" "${VERSION}"
	WriteRegDWORD SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "NoModify" 1
	WriteRegDWORD SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis" "NoRepair" 1
	
	${If} $ArxFatalisInstallDir != ""
		; If an error occured in the data copy, display a message
		Call ShowDataErrorMessageBox
	${EndIf}

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

;------------------------------------------------------------------------------
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


;------------------------------------------------------------------------------
;Uninstaller Section

Section "Uninstall"

	; This will handle all files to uninstall
	; Registry keys to remove are handled manually below
	Call un.AutoUninstallFromLogFile

	;Delete "$INSTDIR\arx.exe"
	;Delete "$INSTDIR\SDL${TARGET}.dll"

	;Delete "$INSTDIR\Uninstall.exe"

	;RMDir "$INSTDIR"

	;!insertmacro MUI_STARTMENU_GETFOLDER Application $StartMenuFolder

	DeleteRegKey SHCTX "Software\Microsoft\Windows\CurrentVersion\Uninstall\ArxLibertatis"
	DeleteRegKey /ifempty SHCTX "Software\ArxLibertatis"

SectionEnd

;------------------------------------------------------------------------------
;Uninstaller Functions

Function un.onInit

	SetRegView ${TARGET}

	!insertmacro MULTIUSER_UNINIT
	!insertmacro MUI_UNGETLANGUAGE
	
FunctionEnd



;------------------------------------------------------------------------------
Function DetectArx
	; If no source data directory was specified, don't bother with the validation
	${If} $ArxFatalisInstallDir == ""
		goto end_success
	${EndIf}

	${DetectArxLanguage} $ArxFatalisInstallDir
	StrCpy $ArxFatalisLanguage $0

	${Switch} $ArxFatalisLanguage
  		${Case} "demo"
			MessageBox MB_YESNO|MB_ICONEXCLAMATION "Arx Fatalis (Demo) found, continue ?" IDNO end_abort
			${Break}

		${Case} "de"
			MessageBox MB_YESNO|MB_ICONEXCLAMATION "Arx Fatalis (German) found, continue ?" IDNO end_abort
			${Break}

		${Case} "en"
			MessageBox MB_YESNO|MB_ICONEXCLAMATION "Arx Fatalis (English) found, continue ?" IDNO end_abort
			${Break}

		${Case} "es"
			MessageBox MB_YESNO|MB_ICONEXCLAMATION "Arx Fatalis (Spanish) found, continue ?" IDNO end_abort
			${Break}

		${Case} "fr"
			MessageBox MB_YESNO|MB_ICONEXCLAMATION "Arx Fatalis (French) found, continue ?" IDNO end_abort
			${Break}

		${Case} "it"
			MessageBox MB_YESNO|MB_ICONEXCLAMATION "Arx Fatalis (Italian) found, continue ?" IDNO end_abort
			${Break}

		${Case} "ru"
			MessageBox MB_YESNO|MB_ICONEXCLAMATION "Arx Fatalis (Russian) found, continue ?" IDNO end_abort
			${Break}

		${Case} "not_found"
			StrCpy $ArxFatalisLanguage "en"
			StrCpy $1 "No speech.pak file found in this directory. Do you still want to continue and use this source directory ?"
			MessageBox MB_YESNO|MB_ICONSTOP '$1' IDNO end_abort
			${Break}

		${Case} "unknown"
			StrCpy $ArxFatalisLanguage "en"
			StrCpy $1 "Arx Fatalis files were found but the version is unknown to this installer. Make sure you have applied the 1.21 patch on your original Arx Fatalis install before running this installer. Do you want to continue anyway ?"
			MessageBox MB_YESNO|MB_ICONSTOP '$1' IDNO end_abort
			${Break}

		${Default}
			MessageBox MB_OK|MB_ICONSTOP 'INTERNAL INSTALLER ERROR. Detected language is \"$ArxFatalisLanguage\" Please select another directory.'
			goto end_abort
	${EndSwitch}

	goto end_success

end_abort:
	Abort
	
end_success:

FunctionEnd
