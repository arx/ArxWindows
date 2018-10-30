## ArxWindows - Libraries and scripts for Arx Libertatis development under Windows

This repository contains everything that you need to build [Arx Libertatis](http://arx-libertatis.org/) in both 32-bit and 64-bit under Windows with MSVC 2015 or newer.
It also contains the necessary to build installers for the game.


### Libraries

* [Boost](http://www.boost.org/) (headers only)
* [GLM](http://glm.g-truc.net/)
* [FreeType](http://www.freetype.org/)
* [OpenAL Soft](http://openal-soft.org/)
* [libepoxy](https://github.com/anholt/libepoxy)
* [SDL2](http://www.libsdl.org/)
* [zLib](http://zlib.net/)

Additionally, you'll need the following libraries to build the Crash Reporter:

* [DbgHelp](http://msdn.microsoft.com/en-us/windows/hardware/gg463009)
* [Qt](http://qt.nokia.com/)


#### How to setup

[Detailed instructions are available on the wiki.](http://wiki.arx-libertatis.org/Downloading_and_Compiling_under_Windows)

1. Download the content of this repository to your PC, for example in [GitBash](Git for Windows):

       cd /c/Code/git
       git clone git://github.com/arx/ArxWindows.git --depth 1

2. Download the Arx Libertatis source code:

       cd /c/Code/git/ArxWindows
       git submodule update --init --remote --recursive

3. Make sure Arx Libertatis is at the desired branch/tag/commit:

       cd /c/Code/git/ArxWindows/arx
       git checkout master

4. Generating the project files

       cd /c/Code/git/ArxWindows
       mkdir build_vc15
       cd build_vc15
       cmake .. -G "Visual Studio 15 2017"

   Replace `"Visual Studio 15 2017"` with the desired [CMake generator name](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html), for example `"Visual Studio 15 2017 Win64"` for 64-bit builds.

5. Build the generated solution in Visual Studio

6. Copy the necessary DLLs to the game binary folder (build_vc15).

   For 32-bit:

       libs\sdl\bin\x86\SDL2.dll
       libs\openal\bin\x86\OpenAL32.dll

   For 64-bit:

       libs\sdl\bin\x64\SDL2.dll
       libs\openal\bin\x64\OpenAL32.dll
