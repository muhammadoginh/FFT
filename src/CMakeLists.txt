#
# CMakeLists.txt for src
#

# Add the necessary source files from the "examples" directory
file(GLOB EXAMPLE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/examples/*.cpp")

# Add the necessary source files from the "lib" directory
file(GLOB LIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/lib/*.cpp")

# Add the necessary header files from the "include" directory
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

# Create an executable target for each example file
foreach(EXAMPLE_SOURCE ${EXAMPLE_SOURCES})
    get_filename_component(EXAMPLE_NAME ${EXAMPLE_SOURCE} NAME_WE)
    add_executable(${EXAMPLE_NAME} ${EXAMPLE_SOURCE} ${LIB_SOURCES})

    # Set the output directory for each executable
    set_target_properties(${EXAMPLE_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../build/bin
    )

endforeach()




# Optionally, you can install the executable
# This is needed when to install the project to Global environment
# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
