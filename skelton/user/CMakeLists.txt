cmake_minimum_required(VERSION 3.13)
project(user C CXX)

init_project(user BINARY)

target_sources(user PRIVATE main.cpp)
target_link_libraries(user PRIVATE userspace::bfintrinsics)
target_include_directories(user PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/../../hypervisor/bfsdk/include
    ${CMAKE_CURRENT_LIST_DIR}/../../hypervisor/bfintrinsics/include
)

fini_project()
