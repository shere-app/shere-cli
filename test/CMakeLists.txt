#
# CMakeLists.txt
# CMake configuration for shere-storage testing
# author: Marek Foltýn
# created: 2017-10-21
#

include_directories(../lib/shere-storage/test/catch/single_include)
set(TEST_SOURCES
    test.cpp
)

# Create testing executable with the library and unit tests
add_executable (shere-cli-test ${TEST_SOURCES})

enable_testing()
add_test(Name CliTest COMMAND shere-cli-test )