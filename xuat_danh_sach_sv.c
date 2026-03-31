#include "main.h"

void xuat_danh_sach_sv(struct SinhVien danh_sach_lop[], int p_so_luong_sv)
{
    if (p_so_luong_sv == 0)
    {
        printf("\n[!] Danh sach dang trong. Hay nhap sinh vien truoc!\n");
        return;
    }

    printf("\n                      DANH SACH SINH VIEN\n");
    printf("+-----+------------+---------------------------+----------------+----------+\n");
    printf("| STT | Ma SV      | Ho Dem                    | Ten            | Nam Sinh |\n");
    printf("+-----+------------+---------------------------+----------------+----------+\n");

    for (int i = 0; i < p_so_luong_sv; i++)
    {
        printf("| %-3d | %-10s | %-25s | %-14s | %-8d |\n",
               i + 1,
               danh_sach_lop[i].ma_sinhvien,
               danh_sach_lop[i].hodem_sinhvien,
               danh_sach_lop[i].ten_sinhvien,
               danh_sach_lop[i].namsinh_sinhvien);
    }
    printf("+-----+------------+---------------------------+----------------+----------+\n");
    printf("Tong so: %d sinh vien.\n", p_so_luong_sv);
}
