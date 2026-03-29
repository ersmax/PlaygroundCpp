# CMakeList.txt : CMake project, include source and define
# project specific logic here.
#

# Add source to this project's executable.
# add_executable ()

# List all folders that contain single-file examples
set(FOLDERS
    "01_Separate_compilation"
    "02_Namespaces"
)

# Automatically get all .cpp and headers files in the listed folders
foreach(folder ${FOLDERS})
    # Gather .cpp and .h files that are directly inside the folder
    file(GLOB SOURCES CONFIGURE_DEPENDS "${folder}/*.cpp")
    file(GLOB HEADERS CONFIGURE_DEPENDS "${folder}/*.h")

    foreach(source ${SOURCES})
        # Executable name = filename without extension
        get_filename_component(exec_name ${source} NAME_WE)

        # Create standalone example target from a single source file
        add_executable(${exec_name} ${source} ${HEADERS})
    endforeach()
endforeach()

# Multi-source examples live in their own subfolders with local CMakeLists.txt
add_subdirectory ("01_Inheritance_basics/14_0_01_Employee")
add_subdirectory ("01_Inheritance_basics/14_01_Employee_Show_data")
add_subdirectory ("01_Inheritance_basics/14_03_Is_Crazy")
add_subdirectory ("01_Inheritance_basics/14_06_Titled_Employee")

# TODO: Add tests and install targets if needed.


