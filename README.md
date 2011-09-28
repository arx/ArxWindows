## ArxDependencies - Prebuilt libraries for ArxFatalis under Windows

This repository contains everything that you need to build the game in both 32-bit and 64-bit under Windows.


### Dependencies

* [Boost](http://www.boost.org/)
* [DevIL](http://openil.sourceforge.net/)
* [DirectX SDK](http://msdn.microsoft.com/en-us/directx/aa937788/)
* [FreeType](http://www.freetype.org/)
* [OpenAL](http://connect.creativelabs.com/openal/)
* [OpenGL](http://www.opengl.org/registry/)
* [GLEW](http://glew.sourceforge.net/)
* [SDL](http://www.libsdl.org/)
* [ZLib](http://zlib.net/)


### How to setup

1. Download the content of this repository to your PC

        Let's say in "E:\git\ArxDependencies\..."

2. Add the following environment variable:

        CMAKE_PREFIX_PATH
and set it's value to

        E:\git\ArxDependencies\zlib;E:\git\ArxDependencies\freetype;E:\git\ArxDependencies\devil;E:\git\ArxDependencies\devil\include\IL;E:\git\ArxDependencies\openal;E:\git\ArxDependencies\boost;E:\git\ArxDependencies\opengl\include;E:\git\ArxDependencies\opengl\lib;E:\git\ArxDependencies\sdl;E:\git\ArxDependencies\directx

3. Copy the necessary DLLs to the game binary folder (arx\bin):

        E:\git\ArxDependencies\devil\bin\DevIL32.dll
        E:\git\ArxDependencies\devil\bin\DevIL64.dll
        E:\git\ArxDependencies\sdl\bin\SDL32.dll
        E:\git\ArxDependencies\sdl\bin\SDL64.dll
        

