set(CMAKE_MINIMUM_VERSION "3.15" CACHE STRING "" FORCE)
cmake_minimum_required (VERSION ${CMAKE_MINIMUM_VERSION})

# Add the modules path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/307modules")

include(AutoVersion)

project ("KeyEcho")

add_subdirectory ("KeyEcho")

unset(CMAKE_MINIMUM_VERSION CACHE)
