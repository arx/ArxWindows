## ArxWindows - Libraries and scripts for Arx Libertatis development under Windows

This repository contains everything that you need to build the game in both 32-bit and 64-bit under Windows.
It also contains the necessary to build installers for Arx Libertatis.


### Libraries

* [Boost](http://www.boost.org/)
* [DevIL](http://openil.sourceforge.net/)
* [DirectX SDK](http://msdn.microsoft.com/en-us/directx/aa937788/)
* [FreeType](http://www.freetype.org/)
* [OpenAL](http://connect.creativelabs.com/openal/)
* [OpenGL](http://www.opengl.org/registry/)
* [GLEW](http://glew.sourceforge.net/)
* [SDL](http://www.libsdl.org/)
* [ZLib](http://zlib.net/)


#### How to setup

1. Download the content of this repository to your PC

        Let's say in "E:\git\ArxWindows\..."

2. Add the following environment variable:

        CMAKE_PREFIX_PATH
and set its value to

        E:\git\ArxWindows\libs\zlib;E:\git\ArxWindows\libs\freetype;E:\git\ArxWindows\libs\devil;E:\git\ArxWindows\libs\openal;E:\git\ArxWindows\libs\boost;E:\git\ArxWindows\libs\opengl;E:\git\ArxWindows\libs\sdl;E:\git\ArxWindows\libs\directx

3. Copy the necessary DLLs to the game binary folder (arx\bin):

        E:\git\ArxWindows\libs\devil\bin\DevIL32.dll
        E:\git\ArxWindows\libs\devil\bin\DevIL64.dll
        E:\git\ArxWindows\libs\sdl\bin\SDL32.dll
        E:\git\ArxWindows\libs\sdl\bin\SDL64.dll
        

