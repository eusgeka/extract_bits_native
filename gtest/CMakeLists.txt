#
# Project name
#
project(extract_bits_native_test)

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                 ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)

include_directories("${PROJECT_SOURCE_DIR}/../include")
#	"${PROJECT_SOURCE_DIR}/../src"
#	"${PROJECT_SOURCE_DIR}/../test")

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
  include_directories("${gtest_SOURCE_DIR}/include")
endif()

set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/../bin_test)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(ut_traditional_pass 
                        ${CMAKE_SOURCE_DIR}/test/extract_bits_native_test.cpp
                        ${CMAKE_INCLUDE_CURRENT_DIR}/extract_bits.hpp
                        ${CMAKE_INCLUDE_CURRENT_DIR}/extract_bits_traditional_pass.hpp
                        ${CMAKE_SOURCE_DIR}/src/extract_bits.cpp
                        ${CMAKE_SOURCE_DIR}/src/extract_bits_traditional_pass.cpp)

target_link_libraries(ut_traditional_pass gtest_main)
add_test(NAME ut_traditional_pass COMMAND ut_traditional_pass)

