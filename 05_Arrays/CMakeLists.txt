# CMakeList.txt : CMake project, include source and define
# project specific logic here.
#

# Add source to this project's executable.
# add_executable ()

# List all folders
set(FOLDERS
    "01_Introduction_Arrays"
    "02_Arrays_in_Functions"
    "03_Programming_with_Arrays"
    "04_Multidimensional_Arrays"
)

# Automatically get all .cpp and headers files 
foreach(folder ${FOLDERS})
    # Gather .cpp and .h files
    file(GLOB SOURCES CONFIGURE_DEPENDS "${folder}/*.cpp")
    file(GLOB HEADERS CONFIGURE_DEPENDS "${folder}/*.h")

    foreach(source ${SOURCES})
        # Executable name = filename without extension
        get_filename_component(exec_name ${source} NAME_WE)

        # Create target
        add_executable(${exec_name} ${source} ${HEADERS})
    endforeach()
endforeach()



# TODO: Add tests and install targets if needed.