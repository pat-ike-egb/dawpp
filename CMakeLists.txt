cmake_minimum_required(VERSION 3.10)
project(JUCE_BASE_REPO)

include(cmake/download_cpm.cmake)

# Download JUCE
CPMAddPackage("gh:juce-framework/JUCE#develop")

find_package( CURL REQUIRED )

# add the executable
add_executable(JUCE_Example src/example.cpp)

# Link dependencies
target_link_libraries( JUCE_Example PRIVATE CURL::libcurl )
target_link_libraries( JUCE_Example PRIVATE juce_core )

