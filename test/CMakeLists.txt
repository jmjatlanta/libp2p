find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories (${TEST_SOURCE_DIR}/src
                     ${TEST_SOURCE_DIR}/libraries
                     ${Boost_INCLUDE_DIRS}
                     )
# add_definitions (-DBOOST_TEST_DYN_LINK)
add_executable (dialer_tests dialer_tests.cpp)
target_link_libraries (dialer_tests
                       libp2p
                       ${Boost_FILESYSTEM_LIBRARY}
                       ${Boost_SYSTEM_LIBRARY}
                       ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                       )