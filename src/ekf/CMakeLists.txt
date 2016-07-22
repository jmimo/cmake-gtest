set(SOURCE_FILES
        "Data.cpp"
        "Data.h"
        "Ekf.h"
        )

add_library(ekf SHARED ${SOURCE_FILES})

target_include_directories(ekf PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )
