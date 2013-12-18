## ArxWindows - Libraries and scripts for Arx Libertatis development under Windows

This repository contains everything that you need to build the game in both 32-bit and 64-bit under Windows.
It also contains the necessary to build installers for Arx Libertatis.


### Libraries

* [Boost](http://www.boost.org/) (headers only)
* [GLM](http://glm.g-truc.net/)
* [FreeType](http://www.freetype.org/)
* [OpenAL](http://connect.creativelabs.com/openal/)
* [OpenGL](http://www.opengl.org/registry/)
* [GLEW](http://glew.sourceforge.net/)
* [SDL](http://www.libsdl.org/)
* [ZLib](http://zlib.net/)

Additionally, you'll need the following libraries to build the Crash Reporter:

* [DbgHelp](http://msdn.microsoft.com/en-us/windows/hardware/gg463009)
* [Qt](http://qt.nokia.com/)


#### How to setup

1. Download the content of this repository to your PC

        Let's say in "E:\git\ArxWindows\..."

2. Add the following environment variable:

        CMAKE_PREFIX_PATH
and set its value to

        E:\git\ArxWindows\libs\zlib;E:\git\ArxWindows\libs\freetype;E:\git\ArxWindows\libs\openal;E:\git\ArxWindows\libs\boost;E:\git\ArxWindows\libs\glm;E:\git\ArxWindows\libs\opengl;E:\git\ArxWindows\libs\sdl;E:\git\ArxWindows\libs\dbghelp

3. Copy the necessary DLLs to the game binary folder (arx\bin). Those marked with a (*) are only needed for the Crash Reporter, 

>>For 32-bit:
>>
        E:\git\ArxWindows\libs\sdl\bin\SDL32.dll
        E:\git\ArxWindows\libs\dbghelp\bin\x86\dbghelp.dll (*)
        E:\git\ArxWindows\libs\dbghelp\bin\x86\symserv.dll (*)
        %QTDIR%\bin\QtCore4.dll (*)
        %QTDIR%\bin\QtGui4.dll (*)
        %QTDIR%\bin\QtNetwork4.dll (*)
        
>>For 64-bit:
>>
        E:\git\ArxWindows\libs\sdl\bin\SDL64.dll
        E:\git\ArxWindows\libs\dbghelp\bin\x64\dbghelp.dll (*)
        E:\git\ArxWindows\libs\dbghelp\bin\x64\symserv.dll (*)
        %QTDIR%\bin\QtCore4.dll (*)
        %QTDIR%\bin\QtGui4.dll (*)
        %QTDIR%\bin\QtNetwork4.dll (*)
