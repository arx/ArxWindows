!define SearchArxInRegistry "!insertmacro SearchArxInRegistry"
!define SearchArxData "!insertmacro SearchArxData"
!define CopyArxData "!insertmacro CopyArxData"

!macro SearchArxInRegistry RegSubKey RegValue
  Push "${RegValue}"
  Push "${RegSubKey}"
  Call SearchArxInRegistry
  Pop $0
!macroend

!macro SearchArxData DataPath
  Push "${DataPath}"
  Call SearchArxData
  Pop $0
!macroend

; Where to look for Arx ?
; Try to find those keys under HKLM or HKCU, with or without the "Wow6432Node" section
Function FindArxInstall

	; Normal install
	${SearchArxInRegistry} "Arkane Studios\Installed Apps\Arx Fatalis" "Folder"
	${If} $0 != ""
		goto end
	${EndIf}

	; GOG version
	${SearchArxInRegistry} "GOG.com\GOGARXFATALIS" "PATH"
	${If} $0 != ""
		goto end
	${EndIf}

	; Steam uninstall info
	${SearchArxInRegistry} "Microsoft\Windows\CurrentVersion\Uninstall\Steam App 1700" "InstallLocation"
	${If} $0 != ""
		goto end
	${EndIf}

	; Original game uninstall info
	${SearchArxInRegistry} "Microsoft\Windows\CurrentVersion\Uninstall\{96443F45-13E2-11D6-AC87-00D0B7A9E540}" "InstallLocation"
	${If} $0 != ""
		goto end
	${EndIf}

	; 1.21 patch uninstall info
	${SearchArxInRegistry} "Microsoft\Windows\CurrentVersion\Uninstall\{171251E0-4EED-4EA1-A46D-3213A226F2B3}_is1" "InstallLocation"
	${If} $0 != ""
		goto end
	${EndIf}

	StrCpy $0 ""

end:
	Push $0	

FunctionEnd


Function SearchArxInRegistry

	; $0 = RegSubKey
	; $1 = RegValue
	Pop $0
	Pop $1

	ReadRegStr $2 HKCU "Software\$0" "$1"
	${If} $2 != ""
		${If} ${FileExists} "$2\data.pak"
			goto end
		${EndIf}
	${EndIf}

	ReadRegStr $2 HKLM "Software\$0" "$1"
	${If} $2 != ""
		${If} ${FileExists} "$2\data.pak"
			goto end
		${EndIf}
	${EndIf}

	${If} ${RunningX64}
		ReadRegStr $2 HKCU "Software\Wow6432Node\$0" "$1"
		${If} $2 != ""
			${If} ${FileExists} "$2\data.pak"
				goto end
			${EndIf}
		${EndIf}

		ReadRegStr $2 HKLM "Software\Wow6432Node\$0" "$1"
		${If} $2 != ""
			${If} ${FileExists} "$2\data.pak"
				goto end
			${EndIf}
		${EndIf}
	${EndIf}

	StrCpy $2 ""
end:
	Push $2
FunctionEnd


!macro CopyArxData SrcPrefix SrcPath DstPath SizeKb
	Push "${SizeKb}"
	Push "${DstPath}"
	Push "${SrcPath}"
	Push "${SrcPrefix}"
	Call CopyArxData
!macroend

Function CopyArxData
	Pop $0	; SrcPrefix
	Pop $1	; SrcPath
	Pop $2	; DstPath
	Pop $3	; SizeKb

	ClearErrors

	DetailPrint "Copying $1$2"
	${CreateDirectory} "$INSTDIR\$1"
	${CopyFiles} "$0\$1$2" "$INSTDIR\$1" "$INSTDIR\$1$2"
FunctionEnd
