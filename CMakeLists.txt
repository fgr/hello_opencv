cmake_minimum_required(VERSION 3.13)
project(hello_opencv)

if (EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup(TARGETS)
else ()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif ()


set(CMAKE_CXX_STANDARD 17)

add_executable(hello_opencv main.cpp)
# target_link_libraries(hello_opencv ${CONAN_LIBS})
target_link_libraries(hello_opencv PRIVATE CONAN_PKG::opencv CONAN_PKG::Catch2)