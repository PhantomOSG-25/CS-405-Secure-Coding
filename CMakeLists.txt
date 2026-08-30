cmake_minimum_required(VERSION 3.20)
project(cs405_secure_coding LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(security_lab src/security_lab.cpp)
target_include_directories(security_lab PUBLIC include)
target_compile_options(security_lab PRIVATE -Wall -Wextra -Wpedantic)

add_executable(security_lab_tests tests/security_lab_tests.cpp)
target_link_libraries(security_lab_tests PRIVATE security_lab)
target_compile_options(security_lab_tests PRIVATE -Wall -Wextra -Wpedantic)

enable_testing()
add_test(NAME security_lab_tests COMMAND security_lab_tests)
