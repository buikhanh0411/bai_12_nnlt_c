#include "main.h"

void xoa_toan_bo_danh_sach_sinh_vien(struct SinhVien danh_sach_sv,int *p_so_luong_sv){
    *p_so_luong_sv = 0;
    for (int i = 0; i < 50; i++)
    {
        memset(danh_sach_sv[i].ma_sinhvien, 0, sizeof(danh_sach_sv[i].ma_sinhvien));
        memset(danh_sach_sv[i].hodem_sinhvien, 0, sizeof(danh_sach_sv[i].hodem_sinhvien));
        memset(danh_sach_sv[i].ten_sinhvien, 0, sizeof(danh_sach_sv[i].ten_sinhvien));
        danh_sach_sv[i].namsinh_sinhvien = 0;
    }
    printf("Da xoa toan bo danh sach sinh vien!\n")
}