@echo off
setlocal

set BRANCH_NAME="master"
set TARGET_NAME="release"

IF NOT (%1)==() set BRANCH_NAME="%1"
IF NOT (%2)==() set TARGET_NAME="%2"

set BUILD_OUTPUT_DIR=../build/%BRANCH_NAME%/win32/%TARGET_NAME%
set QT_BIN_DIR=%QTDIR32%/bin

makensis.exe /V2 /DVERSION=1.0 /DTARGET=32 /DARCH=x86 /DBUILD_OUTPUT_DIR=%BUILD_OUTPUT_DIR% /DQT_BIN_DIR=%QT_BIN_DIR% ArxLibertatis.nsi