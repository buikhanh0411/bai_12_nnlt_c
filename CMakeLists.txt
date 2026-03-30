#Ai Generated :VVV
cmake_minimum_required(VERSION 3.10)

project(QuanLySinhVien C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GLOB SOURCES 
    "main.c"
    "menu.c"
    "nhap_danh_sach_sv.c"
    "xuat_danh_sach_sv.c"
    "in_sv_nho_tuoi_nhat.c"
    "in_sv_sinh_truoc_nam.c"
    "sap_xep_sv_theo_ten.c"
)

add_executable(student_manager ${SOURCES})

message(STATUS "Project đã sẵn sàng để biên dịch!")
