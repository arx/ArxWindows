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
; See ArxLibertatis.nsi for more details
;------------------------------------------------------------------------------

!define SearchArxInRegistry "!insertmacro SearchArxInRegistry"

!define DetectArxLanguage 	"!insertmacro DetectArxLanguage"

!define CopyArxDataFiles 	"!insertmacro CopyArxDataFiles"
!define CopyAndValidateFile "!insertmacro CopyAndValidateFile"
!define CopyDataFile 		"!insertmacro CopyDataFile"
!define ValidateDataFile 	"!insertmacro ValidateDataFile"

!macro SearchArxInRegistry RegSubKey RegValue
  Push "${RegValue}"
  Push "${RegSubKey}"
  Call SearchArxInRegistry
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

!define StrRep "!insertmacro StrRep"
!macro StrRep output string old new
    Push "${string}"
    Push "${old}"
    Push "${new}"
    Call StrRep
    Pop ${output}
!macroend
 
Function StrRep
    Exch $R2 ;new
    Exch 1
    Exch $R1 ;old
    Exch 2
    Exch $R0 ;string
    Push $R3
    Push $R4
    Push $R5
    Push $R6
    Push $R7
    Push $R8
    Push $R9

    StrCpy $R3 0
    StrLen $R4 $R1
    StrLen $R6 $R0
    StrLen $R9 $R2
    loop:
        StrCpy $R5 $R0 $R4 $R3
        StrCmp $R5 $R1 found
        StrCmp $R3 $R6 done
        IntOp $R3 $R3 + 1 ;move offset by 1 to check the next character
        Goto loop
    found:
        StrCpy $R5 $R0 $R3
        IntOp $R8 $R3 + $R4
        StrCpy $R7 $R0 "" $R8
        StrCpy $R0 $R5$R2$R7
        StrLen $R6 $R0
        IntOp $R3 $R3 + $R9 ;move offset by length of the replacement string
        Goto loop
    done:

    Pop $R9
    Pop $R8
    Pop $R7
    Pop $R6
    Pop $R5
    Pop $R4
    Pop $R3
    Push $R0
    Push $R1
    Pop $R0
    Pop $R1
    Pop $R0
    Pop $R2
    Exch $R1
FunctionEnd

Var CopyError
Var NbErrors

!macro CopyDataFile ArxFatalisInstallDir Path Filename
	Push $0
	Push $1
	Push $2
	Push "${Filename}"
	Push "${Path}"
	Push "${ArxFatalisInstallDir}"
	Call CopyDataFile
	Pop $2
	Pop $1
	Pop $0
!macroend

Function CopyDataFile
	; $0 = ArxFatalisInstallDir
	; $1 = Path
	; $2 = Filename
	Pop $0
	Pop $1
	Pop $2
	
	StrCpy $R0 "$0\$1$2"
	${If} ${FileExists} $R0
		DetailPrint "Copying $R0"
		${CopyFiles} $R0 "$INSTDIR\$1" "$INSTDIR\$1$2"
		StrCpy $CopyError 0
	${Else}
		StrCpy $CopyError 1
	${EndIf}
FunctionEnd

!macro ValidateDataFile ExpectedMD5 ArxFatalisInstallDir Path Filename
	Push $0
	Push $1
	Push $2
	Push $3
	Push "${Filename}"
	Push "${Path}"
	Push "${ArxFatalisInstallDir}"
	Push "${ExpectedMD5}"
	Call ValidateDataFile
	Pop $3
	Pop $2
	Pop $1
	Pop $0
!macroend

Function ValidateDataFile
	; $0 = ExpectedMD5s
	; $1 = ArxFatalisInstallDir
	; $2 = Path
	; $3 = Filename
	Pop $0
	Pop $1
	Pop $2
	Pop $3
	
	StrCpy $R0 "$1\$2$3"
	md5dll::GetMD5File $R0
	Pop $R1
		
	StrCpy $R2 0
	StrLen $R3 $0
	
loop:
	StrCpy $R4 $0 32 $R2
	${If} $R1 == $R4
		goto validation_ok
	${EndIf}
	IntOp $R2 $R2 + 36 ; 32 (length of an md5 sum) + 4 (split string " or ")
	IntCmp $R2 $R3 validation_failed loop validation_failed

validation_failed:
	DetailPrint "[Error] File checksum mismatch for $2$3: expected $0, obtained $R1"
	IntOp $NbErrors $NbErrors + 1
		
validation_ok:

FunctionEnd

!macro CopyAndValidateFile ExpectedMD5s ArxFatalisInstallDir Path Filename
	Push $0
	Push $1
	Push $2
	Push $3
	Push "${Filename}"
	Push "${Path}"
	Push "${ArxFatalisInstallDir}"
	Push "${ExpectedMD5s}"
	Call CopyAndValidateFile
	Pop $3
	Pop $2
	Pop $1
	Pop $0
!macroend

Function CopyAndValidateFile
	; $0 = ExpectedMD5s
	; $1 = ArxFatalisInstallDir
	; $2 = Path
	; $3 = Filename
	Pop $0
	Pop $1
	Pop $2
	Pop $3
	
	${CopyDataFile} $1 $2 $3
	${If} $CopyError == 0
		${ValidateDataFile} $0 $1 $2 $3
	${EndIf}
	
	${StrRep} $R0 $3 ".pak" "_default.pak"
	${If} $R0 != $3
		StrCpy $R1 $CopyError
		${CopyDataFile} $1 $2 $R0
		${If} $CopyError == 1
		${AndIf} $R1 == 0
			StrCpy $CopyError 0
		${EndIf}
	${Endif}
	
	${If} $CopyError == 1
		DetailPrint "[Error] File not found: $1\$2$3"
		IntOp $NbErrors $NbErrors + 1
	${EndIf}	
FunctionEnd

!macro CopyArxDataFiles ArxFatalisInstallDir Language
	Push $0
	Push $1
	Push "${Language}"
	Push "${ArxFatalisInstallDir}"
	Call CopyArxDataFiles
	Pop $1
	Pop $0
!macroend

; Checksums of speech.pak used to detect languages.
!define speech_checksum_de   "4c3fdb1f702700255924afde49081b6e"
!define speech_checksum_en   "4e8f962d8204bcfd79ce6f3226d6d6de"
!define speech_checksum_es   "2f88c67ae1537919e69386d27583125b"
!define speech_checksum_fr   "4edf9f8c799190590b4cd52cfa5f91b1"
!define speech_checksum_it   "81f05dea47c52d43f01c9b44dd8fe962"
!define speech_checksum_ru   "677163bc319cd1e9aa1b53b5fb3e9402"
!define speech_checksum_demo "62ca7b1751c0615ee131a94f0856b389"

Function CopyArxDataFiles
	; $0 = ArxFatalisInstallDir
	; $1 = Language (one of "de", "en", "es", "fr", "it", "ru" or "demo")
	Pop $0
	Pop $1
	
	ClearErrors
	StrCpy $NbErrors 0
	
	${If} $1 == "demo"
		DetailPrint "Creating directories..."
		${CreateDirectory} "$INSTDIR"
		${CreateDirectory} "$INSTDIR\misc"
		
		DetailPrint "Copying demo data files..."
		${CopyAndValidateFile} "958b78f8f370b06d769843137138c461" $0 "" "data2.pak"
		${CopyAndValidateFile} "5d7ba6e6c79ebf7fbb232eaced9e8ad9" $0 "" "data.pak"
		${CopyAndValidateFile} "2ae16d3925c597dca70f960f175def3a" $0 "" "loc.pak"
		${CopyAndValidateFile} "9a95ff96795c034524ba1c2e94ea12c7" $0 "misc\" "arx.ttf"
		${CopyAndValidateFile} "aa3dfbd4bc9c863d10a0c5345ae5a4c9" $0 "misc\" "logo.bmp"
		${CopyAndValidateFile} "ea1b3e6d6f4906905d4a34f07e9a59ac" $0 "" "sfx.pak"
		${CopyAndValidateFile} "62ca7b1751c0615ee131a94f0856b389" $0 "" "speech.pak"
		
	${Else}
		DetailPrint "Creating directories..."
		${CreateDirectory} "$INSTDIR"
		${CreateDirectory} "$INSTDIR\graph"
		${CreateDirectory} "$INSTDIR\graph\interface"
		${CreateDirectory} "$INSTDIR\graph\interface\misc"
		${CreateDirectory} "$INSTDIR\graph\obj3d"
		${CreateDirectory} "$INSTDIR\graph\obj3d\textures"
		${CreateDirectory} "$INSTDIR\misc"
	
		DetailPrint "Copying common data files..."
		${CopyAndValidateFile} "f7e0ce700bf963429ac535ca86f8a7b4" $0 "" "data2.pak"
		${CopyAndValidateFile} "7a6038e0397e2319aea5d8dc408d5da8" $0 "" "manual.pdf"
		${CopyAndValidateFile} "3502c76227df6bbd8637d5355e270cc2" $0 "" "map.pdf"
		${CopyAndValidateFile} "2efc9a74c517fd1ee9919900cf4091d2" $0 "" "sfx.pak"		
		${CopyAndValidateFile} "afff1099c01ffeb03b9a351f7b5966b6" $0 "graph\interface\misc\" "arkane.bmp"
		${CopyAndValidateFile} "41445d3792a1f8818d950aca47254488" $0 "graph\interface\misc\" "quit1.bmp"
		${CopyAndValidateFile} "8419274acbff7346c3661b18d6aad6dc" $0 "graph\obj3d\textures\" "fixinter_barrel.jpg"
		${CopyAndValidateFile} "5743b9047c9ad65540c318dfcc98123a" $0 "graph\obj3d\textures\" "fixinter_bell.bmp"
		${CopyAndValidateFile} "f246eff6b19c9c710313b4a4dce96a69" $0 "graph\obj3d\textures\" "fixinter_metal_door.jpg"
		${CopyAndValidateFile} "f81394abbb9006ce0950843b7909db33" $0 "graph\obj3d\textures\" "fixinter_public_notice.bmp"
		${CopyAndValidateFile} "544448f8eedc912aa231a6a04fffb7c5" $0 "graph\obj3d\textures\" "item_bread.bmp"
		${CopyAndValidateFile} "7e26c4199ddaca494c8b369294306b0b" $0 "graph\obj3d\textures\" "item_club.jpg"
		${CopyAndValidateFile} "3a6196fe9b7666c7d80d82be06f6de86" $0 "graph\obj3d\textures\" "item_long_sword.jpg"
		${CopyAndValidateFile} "18492c25ebac02f83e2f0ebda61ecb00" $0 "graph\obj3d\textures\" "item_mauld_sabre.jpg"
		${CopyAndValidateFile} "503a5c2f23668040c675aefdde6dbbe5" $0 "graph\obj3d\textures\" "item_mauldsword.jpg"
		${CopyAndValidateFile} "c0a22b4f7a7a6461da68206e94928637" $0 "graph\obj3d\textures\" "item_mirror.jpg"
		${CopyAndValidateFile} "348f9add709bacee08556d1f8cf10f3f" $0 "graph\obj3d\textures\" "item_ring_casting.bmp"
		${CopyAndValidateFile} "ff05de281c8b380ee98f6e123d3d51cb" $0 "graph\obj3d\textures\" "item_rope.bmp"
		${CopyAndValidateFile} "024ccbb520020f92fba5a5a4f0270cea" $0 "graph\obj3d\textures\" "item_spell_sheet.jpg"
		${CopyAndValidateFile} "027951899b4829599ca611010ea3484f" $0 "graph\obj3d\textures\" "item_torch2.jpg"
		${CopyAndValidateFile} "9ada166f23ddcb775ac20836e752187e" $0 "graph\obj3d\textures\" "item_torch.jpg"
		${CopyAndValidateFile} "cd206a4027f86c6e57b7710c94049efa" $0 "graph\obj3d\textures\" "item_zohark.bmp"
		${CopyAndValidateFile} "79ccc81adb7c37b98f40b478ef1fccd4" $0 "graph\obj3d\textures\" "l7_dwarf_[wood]_board08.jpg"
		${CopyAndValidateFile} "691611087b13d38ef02bb9dfd6a2518e" $0 "graph\obj3d\textures\" "l7_dwarf_[wood]_board80.jpg"
		${CopyAndValidateFile} "116bd374c14ae8c387a4da1899e1dca7" $0 "graph\obj3d\textures\" "npc_dog.bmp"
		${CopyAndValidateFile} "b7a4d0d3d230b2d1470176909004e38b" $0 "graph\obj3d\textures\" "npc_pig.bmp"
		${CopyAndValidateFile} "76034d8d74056c8a982479d36321c228" $0 "graph\obj3d\textures\" "npc_pig_dirty.bmp"
		${CopyAndValidateFile} "00c585ec9ebe8006d7ca72993de7b51b" $0 "graph\obj3d\textures\" "npc_rat_base.bmp"
		${CopyAndValidateFile} "cae38facbf77db742180b9e58d0eb42f" $0 "graph\obj3d\textures\" "npc_rat_base_cm.bmp"
		${CopyAndValidateFile} "0b220bffaedc89fa663f08d12630c342" $0 "graph\obj3d\textures\" "npc_worm_body_part1.jpg"
		${CopyAndValidateFile} "20797cb78f6393a0fb5405969ba9f805" $0 "graph\obj3d\textures\" "npc_worm_body_part2.bmp"
		${CopyAndValidateFile} "00d0b018e995e7d013d6e52e92126901" $0 "graph\obj3d\textures\" "[wood]_light_door.jpg"
		${CopyAndValidateFile} "9a95ff96795c034524ba1c2e94ea12c7" $0 "misc\" "arx_default.ttf"
		${CopyAndValidateFile} "921561e83786efcd25f92147b60a13db" $0 "misc\" "arx_russian.ttf"
		${CopyAndValidateFile} "da59198061cef0761c6b2fca113f76f6" $0 "misc\" "arx_taiwanese.ttf"
		${CopyAndValidateFile} "63ed31a4eb3d226c23e58cfaa974d484" $0 "misc\" "logo.avi"
		${CopyAndValidateFile} "afff1099c01ffeb03b9a351f7b5966b6" $0 "misc\" "logo.bmp"
		
		${CopyAndValidateFile} "a88d239dc7919ab113ff45483cb4ad46 or a91a0b39a046233debbb10b4850e13eb" $0 "" "data.pak"
		
		${Switch} $1
			${Case} "de"
				DetailPrint "Copying german data files..."
	 	 		${CopyAndValidateFile} "31bc35bca48e430e108db1b8bcc2621d" $0 "" "loc.pak"
				${CopyAndValidateFile} ${speech_checksum_de}              $0 "" "speech.pak"
				${Break}
	
			${Default}
			${Case} "en"
				DetailPrint "Copying english data files..."
				${CopyAndValidateFile} "a47b192493afb5794e2161a62d35b69f" $0 "" "loc.pak"
				${CopyAndValidateFile} ${speech_checksum_en}              $0 "" "speech.pak"
				${Break}
	
			${Case} "es"
				DetailPrint "Copying spanish data files..."
				${CopyAndValidateFile} "121f99608814a2c9c5857cfadb665553" $0 "" "loc.pak"
				${CopyAndValidateFile} ${speech_checksum_es}              $0 "" "speech.pak"
				${Break}
	
			${Case} "fr"
				DetailPrint "Copying french data files..."
				${CopyAndValidateFile} "f8fc448fea12469ed94f417c313fe5ea" $0 "" "loc.pak"
				${CopyAndValidateFile} ${speech_checksum_fr}              $0 "" "speech.pak"
				${Break}
	
			${Case} "it"
				DetailPrint "Copying italian data files..."
				${CopyAndValidateFile} "a9e162f2916f5737a95bd8c5bd8a979e" $0 "" "loc.pak"
				${CopyAndValidateFile} ${speech_checksum_it}              $0 "" "speech.pak"
				${Break}
	
			${Case} "ru"
				DetailPrint "Copying russian data files..."
				${CopyAndValidateFile} "a131bf2398ee70a9c22a2bbffd9d0d99" $0 "" "loc.pak"
				${CopyAndValidateFile} ${speech_checksum_ru}              $0 "" "speech.pak"
				${Break}
		${EndSwitch}
	${EndIf}
	
	IfErrors 0 +2
		IntOp $NbErrors $NbErrors + 1
	
	ClearErrors
	
FunctionEnd

Function ShowDataErrorMessageBox
	${IfNot} $NbErrors == 0
		MessageBox MB_OK|MB_ICONEXCLAMATION "The installer encountered some issues while copying the original Arx Fatalis data. Please review the installation log and correct the issues manually."
	${EndIf}
FunctionEnd

!macro DetectArxLanguage ArxFatalisInstallDir
  Push "${ArxFatalisInstallDir}"
  Call DetectArxLanguage
  Pop $0
!macroend

Function DetectArxLanguage
	; $0 = ArxFatalisInstallDir
	Pop $0
	
	StrCpy $1 "$0\speech.pak"
	
	${IfNot} ${FileExists} $1
		StrCpy $1 "$0\speech_default.pak"
		${IfNot} ${FileExists} $1
			goto file_not_found
		${EndIf}
	${EndIf}
	
	md5dll::GetMD5File $1
	Pop $2
	
	${Switch} $2
		${Case} ${speech_checksum_de}
			StrCpy $3 "de"
			${Break}
			
		${Case} ${speech_checksum_en}
			StrCpy $3 "en"
			${Break}
			
		${Case} ${speech_checksum_es}
			StrCpy $3 "es"
			${Break}
			
		${Case} ${speech_checksum_fr}
			StrCpy $3 "fr"
			${Break}
			
		${Case} ${speech_checksum_it}
			StrCpy $3 "it"
			${Break}
			
		${Case} ${speech_checksum_ru}
			StrCpy $3 "ru"
			${Break}
			
		${Case} ${speech_checksum_demo}
			StrCpy $3 "demo"
			${Break}
			
		${Default}
			goto unknown_data
	${EndSwitch}
	
	goto end_success
	
file_not_found:
	StrCpy $3 "not_found"
	goto end_success
	
unknown_data:
	StrCpy $3 "unknown"
	goto end_success
	
end_success:
	Push $3
	
FunctionEnd
