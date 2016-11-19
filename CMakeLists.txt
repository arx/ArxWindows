project(ArxWindows)

cmake_minimum_required(VERSION 2.8.5)

set(libs "${CMAKE_CURRENT_LIST_DIR}/libs")
set(CMAKE_PREFIX_PATH
	"${libs}/zlib"
	"${libs}/freetype"
	"${libs}/openal"
	"${libs}/boost"
	"${libs}/glm"
	"${libs}/opengl"
	"${libs}/sdl"
)

if(DEFINED CMAKE_FIND_ROOT_PATH)
	# Need to be able to find these using absolute paths
	if(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY STREQUAL NEVER)
		set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY LAST)
	endif()
	if(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE STREQUAL NEVER)
		set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE LAST)
	endif()
endif()

set(DATA_FILES "${CMAKE_CURRENT_LIST_DIR}/data")

if(NOT DEFINED BUILD_TESTS)
	# TODO Add CppUnit library
	set(BUILD_TESTS OFF)
endif()

add_subdirectory("arx")
