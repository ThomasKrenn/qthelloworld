
# Component names are case sensitive
find_package(Qt5 COMPONENTS Core REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
  
add_executable(helloworld "")


target_include_directories(helloworld
 PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}
)

target_sources(helloworld 
PRIVATE
   main.hpp
   main.cpp
)

target_link_libraries(helloworld
 PRIVATE
    Qt5::Core
)