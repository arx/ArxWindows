@echo off
setlocal

set BRANCH_NAME="master"
IF NOT (%1)==() set BRANCH_NAME="%1"

:: Pull a clean version of the ArxLibertatis repo
rmdir /S /Q %BRANCH_NAME%
call git clone git://github.com/arx/ArxLibertatis.git %BRANCH_NAME%
pushd %BRANCH_NAME%

IF NOT (%1)==() call git checkout %BRANCH_NAME%

popd