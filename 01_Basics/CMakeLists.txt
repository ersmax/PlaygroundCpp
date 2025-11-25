# CMakeList.txt : CMake project, include source and define
# project specific logic here.

# Add source to this project's executable.
# add_executable (Cpp_vs_Java "02_Expressions/1_0_0_Cpp_vs_Java.cpp")

# Find all .cpp files recursively inside this chapter folder
file(GLOB_RECURSE CHAPTER_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
)

foreach(src ${CHAPTER_SOURCES})
    # Build unique target name based on folder structure
    file(RELATIVE_PATH rel ${CMAKE_SOURCE_DIR} ${src})

    # Replace / with __ so name is valid
    string(REPLACE "/" "__" target_name ${rel})
    string(REPLACE "\\" "__" target_name ${target_name})
    string(REPLACE ".cpp" "" target_name ${target_name})

    add_executable(${target_name} ${src})
endforeach()


# TODO: Add tests and install targets if needed.