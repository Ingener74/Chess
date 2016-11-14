cmake_minimum_required(VERSION 3.0)

project(Chess)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
include_directories(
        ${Qt5Widgets_INCLUDE_DIRS}
        ${Qt5Core_INCLUDE_DIRS}
)

qt5_add_resources(CHESS_RESOURCES res/resources.qrc)

qt5_wrap_ui(CHESS_UI res/mainwindow.ui)

set(Chess_SOURCES
    ${CHESS_RESOURCES} 
    ${CHESS_UI}
    src/main.cpp
    src/ChessWindow.h
    src/ChessWindow.cpp
)

if(WIN32)
	add_executable(Chess WIN32 ${Chess_SOURCES} res/resources.rc)
else()
	add_definitions(-std=c++11)
	add_executable(Chess ${Chess_SOURCES})
endif()

target_link_libraries(Chess Qt5::Widgets Qt5::Core)

install(TARGETS Chess DESTINATION bin)

if(WIN32)
	set(CPACK_GENERATOR "NSIS")
else()
	set(CPACK_GENERATOR "ZIP")
endif()

set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Shnaider Pavel") #required
 
include(CPack)