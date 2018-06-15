cmake_minimum_required (VERSION 3.9)
project (qthelloworld)

# cd <buildir>
# cmake -DCMAKE_INSTALL_PREFIX=<install dir> -G  "Visual Studio 14 2015 Win64" ..
# 
# cmake -DCMAKE_INSTALL_PREFIX=<install dir> -G  "Unix Makefiles"  ..
#

message("CMAKE_SYSTEM_NAME: ${CMAKE_SYSTEM_NAME}")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMakeBuild")
set_property(GLOBAL PROPERTY AUTOGEN_TARGETS_FOLDER CMakeMoc)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/x64)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/x64)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/x64)



add_subdirectory(src)


