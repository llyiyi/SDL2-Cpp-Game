cmake_minimum_required(VERSION 3.26.3)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME fly-bird)
project(${PROJECT_NAME}) 
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

include_directories(include)
add_subdirectory(src)

target_link_libraries(fly-bird PRIVATE
    SDL2main
    SDL2
    SDL2_image
    SDL2_ttf
    SDL2_mixer
)
