cmake_minimum_required(3.26)

project(fly-bird)

include_directories(include)
add_subdirectory(src)

target_link_libraries(fly-bird PRIVATE
    SDL2main
    SDL2
    SDL2_image
    SDL2_ttf
    SDL2_mixer
)