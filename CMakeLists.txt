cmake_minimum_required(VERSION 3.10)

# Tên dự án của bạn
project(QuanLySinhVien C)

# Thiết lập tiêu chuẩn C (C99 hoặc C11 thường dùng cho học thuật)
set(CMAKE_C_STANDARD 99)

# Gom tất cả các file .c vào một biến để dễ quản lý
set(SOURCES
    main.c
    menu.c
    nhap_danh_sach_sv.c
    xuat_danh_sach_sv.c
    in_sv_nho_tuoi_nhat.c
    in_sv_sinh_truoc_nam.c
    sap_xep_sv_theo_ten.c
)

# Tạo file thực thi (executable) từ các file nguồn
add_executable(QuanLySinhVien ${SOURCES})

# Đảm bảo trình biên dịch tìm thấy file main.h trong cùng thư mục
target_include_directories(QuanLySinhVien PRIVATE .)