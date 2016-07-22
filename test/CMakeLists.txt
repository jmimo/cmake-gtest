# We need thread support
find_package(Threads REQUIRED)

# Enable ExternalProject CMake module
include(ExternalProject)

# Download and install GoogleTest
ExternalProject_Add(
        gtest
        URL http://googletest.googlecode.com/files/gtest-1.7.0.zip
        PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
        CMAKE_ARGS
            -DCMAKE_CXX_STANDARD=11
            -DCMAKE_CXX_STANDARD_REQUIRED=ON
        INSTALL_COMMAND ""
)

# Create a libgtest target to be used as a dependency by test programs
add_library(libgtest IMPORTED STATIC GLOBAL)
add_dependencies(libgtest gtest)

# Set gtest properties
ExternalProject_Get_Property(gtest source_dir binary_dir)
set_target_properties(libgtest PROPERTIES
        "IMPORTED_LOCATION" "${binary_dir}/libgtest.a"
        "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
        )

include_directories("${source_dir}/include")

# Download and install GoogleMock
ExternalProject_Add(
        gmock
        URL http://googlemock.googlecode.com/files/gmock-1.7.0.zip
        PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gmock
        CMAKE_ARGS
            -DCMAKE_CXX_STANDARD=11
            -DCMAKE_CXX_STANDARD_REQUIRED=ON
        INSTALL_COMMAND ""
)

# Create a libgmock target to be used as a dependency by test programs
add_library(libgmock IMPORTED STATIC GLOBAL)
add_dependencies(libgmock gmock)

# Set gmock properties
ExternalProject_Get_Property(gmock source_dir binary_dir)
set_target_properties(libgmock PROPERTIES
        "IMPORTED_LOCATION" "${binary_dir}/libgmock.a"
        "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
        )

include_directories("${source_dir}/include")

add_subdirectory(ekf)
