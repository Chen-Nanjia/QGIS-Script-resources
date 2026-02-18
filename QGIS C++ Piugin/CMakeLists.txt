cmake_minimum_required(VERSION 3.16)
project(QGIS_CPP_Plugin VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find QGIS
if(WIN32)
    set(QGIS_ROOT "C:/OSGeo4W" CACHE PATH "QGIS install path")
    list(APPEND CMAKE_PREFIX_PATH "${QGIS_ROOT}/apps/qgis-ltr")
endif()

find_package(QGIS REQUIRED)

# Create plugin
add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME}
    QGIS::Core
    QGIS::Gui
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)

# Install
install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${QGIS_ROOT}/apps/qgis-ltr/plugins
)