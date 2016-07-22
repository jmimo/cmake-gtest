# add test resources and create a runnable.
set(SOURCE_FILES
        "EkfTest.cpp"
        "main.cpp"
        )

add_executable(testekf ${SOURCE_FILES})

target_link_libraries(testekf
        ekf
        libgtest
        libgmock
        )

add_test(NAME EkfTest
         COMMAND EkfTest)
