cmake_minimum_required(VERSION 3.10.0)
project(supermodule VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(learnSubModule)
add_subdirectory(learnSubModule build)

add_executable(supermodule main.cpp)
target_link_libraries(supermodule submodule)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
