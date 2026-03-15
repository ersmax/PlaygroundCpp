# CMakeList.txt : CMake project, include source and define
# project specific logic here.
#

# Add source to this project's executable.
# add_executable ()

# List all folders
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

# Explicit target for the DigitalTime example that needs multiple sources
add_executable(11_0_1_dTime_App
    "01_Separate_compilation/11_0_01_DigitalTime/11_0_1_dTime_App.cpp"
    "01_Separate_compilation/11_0_01_DigitalTime/11_0_1_dTime.cpp"
)


# TODO: Add tests and install targets if needed.