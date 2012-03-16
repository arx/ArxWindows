pushd "../build"

call CleanGet master
call Build32 master release
call Build64 master release

popd

call BuildInstaller32 master release
call BuildInstaller64 master release