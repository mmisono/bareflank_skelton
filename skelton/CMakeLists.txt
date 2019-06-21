cmake_minimum_required(VERSION 3.13)

if(ENABLE_BUILD_VMM)
    add_subproject(bareflank_skelton vmm
        DEPENDS bfvmm
        SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/vmm
    )
endif()

if(ENABLE_BUILD_USERSPACE)
    add_subproject(user userspace
        DEPENDS bfintrinsics
        SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/user
    )
endif()
