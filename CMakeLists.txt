cmake_minimum_required(VERSION 3.25)
project(sudoku-game)

set(CMAKE_CXX_STANDARD 23)

add_executable(sudoku-game main.cpp)

find_package(wxWidgets CONFIG REQUIRED)
target_link_libraries(sudoku-game PRIVATE wx::core wx::base)

target_include_directories(sudoku-game PUBLIC includes)