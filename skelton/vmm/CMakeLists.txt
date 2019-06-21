cmake_minimum_required(VERSION 3.13)
project(bareflank_skelton C CXX)

init_project(bareflank_skelton BINARY)

target_sources(bareflank_skelton PRIVATE main.cpp)
target_link_libraries(bareflank_skelton PRIVATE vmm::bfvmm)

fini_project()
