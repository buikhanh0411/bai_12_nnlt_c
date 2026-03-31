#include "utils.h"

void in_sinh_vien(struct SinhVien sv, int stt)
{
    if (stt != -1)
    {
        printf("| %-3d | %-10s | %-25s | %-14s | %-8d |\n",
               stt,
               sv.ma_sinhvien,
               sv.hodem_sinhvien,
               sv.ten_sinhvien,
               sv.namsinh_sinhvien);
    }
    else
    {
        printf("%s | %s | %s | %d\n",
               sv.ma_sinhvien,
               sv.hodem_sinhvien,
               sv.ten_sinhvien,
               sv.namsinh_sinhvien);
    }
}

void copy_sinh_vien(struct SinhVien *dest, struct SinhVien src)
{
    *dest = src;
}
