#include "../utils/utils.h"
#include "main.h"

void xuat_danh_sach_sv(struct SinhVien danh_sach_sv[], int so_luong_sv) {
  if (so_luong_sv == 0) {
    printf("\n[!] Danh sach dang trong. Hay nhap sinh vien truoc!\n");
    return;
  }

  printf("\n                      DANH SACH SINH VIEN\n");
  in_danh_sach_sv(danh_sach_sv, so_luong_sv);
}
