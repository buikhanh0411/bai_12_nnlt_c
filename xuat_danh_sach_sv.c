#include "utils.h"

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
        in_sinh_vien(danh_sach_lop[i], i + 1);
    }
    printf("+-----+------------+---------------------------+----------------+----------+\n");
    printf("Tong so: %d sinh vien.\n", p_so_luong_sv);
}
