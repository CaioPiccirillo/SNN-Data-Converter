cmake_minimum_required(VERSION 3.0.0)
project(snn-data-converter VERSION 0.1.0)

include(CTest)
include(third/mnist/MNISTConfig.cmake)
enable_testing()

find_package(Qt5 COMPONENTS Core REQUIRED)

include_directories(${MNIST_INCLUDE_DIR})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(snn-data-converter src/main.cpp)

target_link_libraries(snn-data-converter Qt5::Core)