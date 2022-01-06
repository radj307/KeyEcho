# KeyEcho
set(CMAKE_MINIMUM_VERSION "3.15" CACHE STRING "" FORCE)
cmake_minimum_required (VERSION ${CMAKE_MINIMUM_VERSION})

# Add the modules path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/307modules")

# Get versioning information
include(AutoVersion)
GET_VERSION("${CMAKE_SOURCE_DIR}" KeyEcho_VERSION_MAJOR KeyEcho_VERSION_MINOR KeyEcho_VERSION_PATCH)
MAKE_VERSION(KeyEcho_VERSION ${KeyEcho_VERSION_MAJOR} ${KeyEcho_VERSION_MINOR} ${KeyEcho_VERSION_PATCH})

# Create Project
project("KeyEcho" VERSION ${KeyEcho_VERSION})

# Include Subdirectories
add_subdirectory("307lib")
add_subdirectory("KeyEcho")

# Cleanup
unset(CMAKE_MINIMUM_VERSION CACHE)
