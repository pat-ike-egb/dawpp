cmake_minimum_required(VERSION 3.10)
project(JUCE_BASE_REPO)

include(cmake/download_cpm.cmake)

# Download JUCE
CPMAddPackage("gh:juce-framework/JUCE#develop")

find_package( CURL REQUIRED )

# acompile the library
add_library( JUCE_Example dawpp)

# Link dependencies
target_link_libraries( JUCE_Example PRIVATE CURL::libcurl )
target_link_libraries( JUCE_Example PRIVATE juce_core )
target_link_libraries( JUCE_Example PRIVATE juce_audio_basics )

