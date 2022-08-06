## ArxWindows - Libraries and scripts for Arx Libertatis development under Windows

This repository contains everything that you need to build [Arx Libertatis](https://arx-libertatis.org/) in both 32-bit and 64-bit under Windows with MSVC 2015 or newer.
It also contains the necessary to build installers for the game.


### Libraries

* [Boost](https://www.boost.org/) (headers only)
* [GLM](https://glm.g-truc.net/)
* [FreeType](https://www.freetype.org/)
* [OpenAL Soft](https://openal-soft.org/)
* [libepoxy](https://github.com/anholt/libepoxy)
* [SDL2](https://libsdl.org/)
* [zLib](https://zlib.net/)

Additionally, you'll need the following libraries to build the Crash Reporter:

* [DbgHelp](https://docs.microsoft.com/en-us/windows/win32/debug/debug-help-library)
* [Qt](https://www.qt.io/)


#### How to setup

[Detailed instructions are available on the wiki.](https://wiki.arx-libertatis.org/Downloading_and_Compiling_under_Windows)

1. Download the content of this repository to your PC, for example in [GitBash](https://git-scm.com/downloads):

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
       mkdir build
       cd build
       cmake .. -G "Visual Studio 15 2017"

   Replace `"Visual Studio 15 2017"` with the desired [CMake generator name](https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html), for example `"Visual Studio 15 2017 Win64"` for 64-bit builds.
   Starting with CMake 3.1 the architecture should be specified seperately
   
       cmake .. -G "Visual Studio 16 2019" -A x64
       
   Valid Architectures are Win32, x64, ARM and ARM64. If you intend to use Visual Studios incremental builds, add -DDEVELOPER=1 to the command
   
       cmake .. -G "Visual Studio 16 2019" -A x64 -DDEVELOPER=1

5. Build the generated solution in Visual Studio
