;----------------------------------------------------------------------------
; arxlibertatis.nsi
;----------------------------------------------------------------------------
!include LogicLib.nsh
!include MUI2.nsh

!ifndef VERSION
	!error "VERSION not defined."
!endif

!ifndef TARGET
	!error "TARGET not defined."
!endif

!ifndef ARCH
	!error "ARCH not defined."
!endif

SetCompressor /SOLID LZMA 

; The name of the installer
Name "Arx Libertatis"

VIAddVersionKey "ProductName" "Arx Libertatis"
VIAddVersionKey "ProductVersion" "${VERSION}"
VIAddVersionKey "FileVersion" "${VERSION}"
VIAddVersionKey "FileDescription" "Arx Libertatis installer"
VIAddVersionKey "LegalCopyright" "Copyright 2011 Arx Libertatis Team"
VIProductVersion "${VERSION}.0.0"

Icon data\arx-libertatis.ico
UninstallIcon data\arx-libertatis.ico

; The file to write
OutFile "arxlibertatis_${VERSION}_${ARCH}.exe"

; The default installation directory
InstallDir $PROGRAMFILES\ArxLibertatis

;Get installation folder from registry if available
InstallDirRegKey HKCU "Software\ArxLibertatis" "InstallLocation"

; Request application privileges for Windows Vista
RequestExecutionLevel highest

;----------------------------------------------------------------------------
; Interface configuration
;----------------------------------------------------------------------------
!define MUI_ICON data\arx-libertatis.ico
!define MUI_UNICON data\arx-libertatis.ico

!define MUI_HEADERIMAGE
	!define MUI_HEADERIMAGE_BITMAP data\arx-libertatis.bmp

;----------------------------------------------------------------------------
; Languages
;----------------------------------------------------------------------------
!insertmacro MUI_LANGUAGE "English"

;----------------------------------------------------------------------------
; Pages
;----------------------------------------------------------------------------
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES

!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES


;----------------------------------------------------------------------------
Section "" ;No components page, name is not important
	
	InitPluginsDir

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
  WriteRegStr HKCU "Software\ArxLibertatis" "InstallLocation" $INSTDIR
  
  ;Create uninstaller
  WriteUninstaller "$INSTDIR\Uninstall.exe"
  
  IfRebootFlag 0 noreboot
  MessageBox MB_YESNO|MB_ICONQUESTION "A reboot is required to finish the installation. Do you wish to reboot now?" IDNO noreboot
    Reboot

noreboot:

SectionEnd ; end the section

;--------------------------------
;Uninstaller Section

Section "Uninstall"

  Delete "$INSTDIR\Uninstall.exe"
  Delete arx.exe
  Delete DevIL${TARGET}.dll
	Delete SDL${TARGET}.dll

  RMDir "$INSTDIR"

  DeleteRegKey HKCU "Software\ArxLibertatis"

SectionEnd