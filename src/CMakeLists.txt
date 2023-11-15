#
# CMakeLists.txt for src
#

# Add the necessary source files from the "examples" directory
file(GLOB EXAMPLE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/examples/*.cpp")

# Add the necessary source files from the "lib" directory
file(GLOB LIB_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/lib/*.cpp")

# Add the necessary header files from the "include" directory
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

# Create the executable target
add_executable(${PROJECT_NAME} ${EXAMPLE_SOURCES} ${LIB_SOURCES})

# Set the output directory for the executable
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../build/bin
)

# Optionally, you can install the executable
# This is needed when to install the project to Global environment
# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
