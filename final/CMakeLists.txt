cmake_minimum_required(VERSION 3.10)

project(Niekonczace_sie_skakanie)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${SDL2_IMAGE_DIRS})

add_executable(Niekonczace_sie_skakanie Main.c code/kernel/Engine.h code/kernel/Engine.c code/rendering/RenderingLayers.c code/rendering/RenderingLayers.h code/rendering/Tekstury.c code/rendering/Tekstury.h code/sterowanie/Sterowanie.c code/sterowanie/Sterowanie.h code/kernel/Update.c code/kernel/Update.h)
target_link_libraries(Niekonczace_sie_skakanie ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})
