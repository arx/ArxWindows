;; From http://nsis.sourceforge.net/Uninstall_only_installed_files

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Global options
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;Set the name of the uninstall log
	!define UninstLog "uninstall.log"
	Var UninstLog

;Uninstall log file missing.
	LangString UninstLogMissing ${LANG_ENGLISH} "${UninstLog} not found!$\r$\nUninstallation cannot proceed!"


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Wrapper macros to log each file operation
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;AddItem macro
	!macro AddItem Path
		FileWrite $UninstLog "${Path}$\r$\n"
	!macroend

;File macro
	!macro File FilePath FileName
		IfFileExists "$OUTDIR\${FileName}" +2
		FileWrite $UninstLog "$OUTDIR\${FileName}$\r$\n"
		File "${FilePath}\${FileName}"
	!macroend

;CreateShortcut macro
	!macro CreateShortcut FilePath FilePointer
		FileWrite $UninstLog "${FilePath}$\r$\n"
		CreateShortcut "${FilePath}" "${FilePointer}"
	!macroend

;Copy files macro
	!macro CopyFiles SourcePath DestPath DestUninstall
		IfFileExists "${DestPath}" +2
		FileWrite $UninstLog "${DestUninstall}$\r$\n"
		CopyFiles /SILENT "${SourcePath}" "${DestPath}"
	!macroend

;Rename macro
	!macro Rename SourcePath DestPath
		IfFileExists "${DestPath}" +2
		FileWrite $UninstLog "${DestPath}$\r$\n"
		Rename "${SourcePath}" "${DestPath}"
	!macroend

;CreateDirectory macro
	!macro CreateDirectory Path
		CreateDirectory "${Path}"
		FileWrite $UninstLog "${Path}$\r$\n"
	!macroend

;SetOutPath macro
	!macro SetOutPath Path
		SetOutPath "${Path}"
		FileWrite $UninstLog "${Path}$\r$\n"
	!macroend

;WriteUninstaller macro
	!macro WriteUninstaller Path
		WriteUninstaller "${Path}"
		FileWrite $UninstLog "${Path}$\r$\n"
	!macroend


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Call this from the uninstall section
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

Function un.AutoUninstallFromLogFile
	;Can't uninstall if uninstall log is missing!
	IfFileExists "$INSTDIR\${UninstLog}" +3
		MessageBox MB_OK|MB_ICONSTOP "$(UninstLogMissing)"
		Abort

	Push $R0
	Push $R1
	Push $R2
	SetFileAttributes "$INSTDIR\${UninstLog}" NORMAL
	FileOpen $UninstLog "$INSTDIR\${UninstLog}" r
	StrCpy $R1 -1

	GetLineCount:
	ClearErrors
	FileRead $UninstLog $R0
	IntOp $R1 $R1 + 1
	StrCpy $R0 $R0 -2
	Push $R0
	IfErrors 0 GetLineCount

	Pop $R0

	LoopRead:
	StrCmp $R1 0 LoopDone
	Pop $R0

	IfFileExists "$R0\*.*" 0 +3
		RMDir $R0  #is dir
		Goto +3
	IfFileExists $R0 0 +3
		Delete $R0 #is file

	IntOp $R1 $R1 - 1
		Goto LoopRead
LoopDone:
	FileClose $UninstLog
	Delete "$INSTDIR\${UninstLog}"
	RMDir "$INSTDIR"
	Pop $R2
	Pop $R1
	Pop $R0
FunctionEnd


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Defines for easier use of macros
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	;AddItem macro
	!define AddItem "!insertmacro AddItem"

	;File macro
	!define File "!insertmacro File"

	;CreateShortcut macro
	!define CreateShortcut "!insertmacro CreateShortcut"

	;Copy files macro
	!define CopyFiles "!insertmacro CopyFiles"

	;Rename macro
	!define Rename "!insertmacro Rename"

	;CreateDirectory macro
	!define CreateDirectory "!insertmacro CreateDirectory"

	;SetOutPath macro
	!define SetOutPath "!insertmacro SetOutPath"

	;WriteUninstaller macro
	!define WriteUninstaller "!insertmacro WriteUninstaller"

Section -openlogfile
	CreateDirectory "$INSTDIR"
	IfFileExists "$INSTDIR\${UninstLog}" +3
		FileOpen $UninstLog "$INSTDIR\${UninstLog}" w
	Goto +4
	SetFileAttributes "$INSTDIR\${UninstLog}" NORMAL
	FileOpen $UninstLog "$INSTDIR\${UninstLog}" a
	FileSeek $UninstLog 0 END
SectionEnd