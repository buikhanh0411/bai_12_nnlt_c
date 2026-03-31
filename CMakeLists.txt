#Ai Generated :VVV
cmake_minimum_required(VERSION 3.10)

project(QuanLySinhVien C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(src/core src/utils)

file(GLOB SOURCES 
    "src/core/*.c"
    "src/utils/*.c"
)

add_executable(student_manager ${SOURCES})

message(STATUS "Project đã sẵn sàng để biên dịch!")
