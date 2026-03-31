#include "utils.h"

void in_danh_sach_sv(struct SinhVien danh_sach[], int so_luong)
{
    printf("+-----+------------+---------------------------+----------------+----------+\n");
    printf("| STT | Ma SV      | Ho Dem                    | Ten            | Nam Sinh |\n");
    printf("+-----+------------+---------------------------+----------------+----------+\n");

    for (int i = 0; i < so_luong; i++)
    {
        printf("| %-3d | %-10s | %-25s | %-14s | %-8d |\n",
               i + 1,
               danh_sach[i].ma_sinhvien,
               danh_sach[i].hodem_sinhvien,
               danh_sach[i].ten_sinhvien,
               danh_sach[i].namsinh_sinhvien);
    }
    printf("+-----+------------+---------------------------+----------------+----------+\n");
    printf("Tong so: %d sinh vien.\n", so_luong);
}

void copy_sinh_vien(struct SinhVien *dest, struct SinhVien src)
{
    *dest = src;
}
