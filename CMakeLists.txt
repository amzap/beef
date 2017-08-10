cmake_minimum_required (VERSION 2.6)
project (Beef)

# Package Information
set (Beef_VERSION_MAJOR 0)
set (Beef_VERSION_MINOR 1)
set (PACKAGE_NAME      "beef")
set (PACKAGE_VERSION   "0.1")
set (PACKAGE_STRING    "${PACKAGE_NAME} ${PACKAGE_VERSION}")
set (PACKAGE_TARNAME   "${PACKAGE_NAME}-${PACKAGE_VERSION}")
set (PACKAGE_BUGREPORT "https://github.com/amzap/beef/issues")

# Configuration headers
configure_file (
    "${PROJECT_SOURCE_DIR}/beef/beef-config.h.in"
    "${PROJECT_BINARY_DIR}/beef-config.h"
    )

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

add_subdirectory("beef/events")

add_executable(beefd beef/beef.cpp)
target_link_libraries(beefd events)
