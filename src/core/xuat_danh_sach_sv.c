#include "main.h"
#include "../utils/utils.h"

void xuat_danh_sach_sv(struct SinhVien danh_sach_sv[], int p_so_luong_sv)
{
    if (p_so_luong_sv == 0)
    {
        printf("\n[!] Danh sach dang trong. Hay nhap sinh vien truoc!\n");
        return;
    }

    printf("\n                      DANH SACH SINH VIEN\n");
    in_danh_sach_sv(danh_sach_sv, p_so_luong_sv);
}
