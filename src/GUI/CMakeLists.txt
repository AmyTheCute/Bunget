cmake_minimum_required(VERSION 3.5)

project(Bunget_GUI VERSION 1.0
DESCRIPTION "Budget GUI"
LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/Users/amyhaghighimood/Qt/lib/cmake")

#Find Qt Packages
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets) 
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Gui)

set (CMAKE_CXX_STANDARD 20)
set(PROJECT_SOURCES
        mainwindow.cpp
        mainwindow.ui
        mainwindow.h
        Page_Home.cpp
        Page_Home.ui
        Page_Home.h
        Page_Expenses.cpp
        Page_Expenses.h
        Page_Expenses.ui

)

add_library(Bunget_GUI STATIC ${PROJECT_SOURCES})

# Link Qt required libs
target_link_libraries(Bunget_GUI PUBLIC Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Bunget_GUI PUBLIC Qt6::Gui)


include_directories(../Financial)
target_link_libraries(Bunget_GUI PUBLIC Financial)
