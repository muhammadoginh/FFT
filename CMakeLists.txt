#
# CMakeLists.txt for root directory
#

## This CMakeLists file was intended to set any global configurations.

cmake_minimum_required(VERSION 3.16.3)

project(FFT C CXX)

# Include the CMakeLists.txt in the src directory
add_subdirectory(src)

# Include the third-party library
add_subdirectory(third-party/cereal)


# #--------------------------------------------------------------------
# # Third-party logic
# #--------------------------------------------------------------------
# include (ExternalProject)

# # third party directories
# set( THIRDPARTYDIR ${CMAKE_CURRENT_SOURCE_DIR}/third-party )

# ### Handle third-party CEREAL
# include_directories( ${THIRDPARTYDIR}/cereal/include )