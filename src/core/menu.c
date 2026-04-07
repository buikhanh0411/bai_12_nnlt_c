#include "main.h"

void loop_menu(struct SinhVien danh_sach_sv[], int *p_so_luong_sv)
{
  int g_select = 2007; // random :))

  while (g_select)
  {
    CLEAR_SCREEN();
    printf("==========================================\n");
    printf("   CHUONG TRINH QUAN LY SINH VIEN\n");
    printf("==========================================\n");
    printf("1. Nhap danh sach sinh vien\n");
    printf("2. Xuat danh sach sinh vien\n");
    printf("3. In sinh vien nho tuoi nhat\n");
    printf("4. In sinh vien sinh truoc nam x\n");
    printf("5. Sap sep sinh vien theo ten\n");
    printf("6. Xoa toan bo danh sach sinh vien\n");
    printf("0. Thoat\n");
    printf("------------------------------------------\n");
    printf("Lua chon cua ban: ");

    if (scanf("%i", &g_select) != 1)
    {
      // Xu ly neu nguoi dung nhap chu cai thay vi so
      scanf("%*s");
      g_select = 2007;
      continue;
    }

    switch (g_select)
    {
    case 1:
      nhap_danh_sach_sv(danh_sach_sv, p_so_luong_sv);
      break;
    case 2:
      xuat_danh_sach_sv(danh_sach_sv, *p_so_luong_sv);
      printf("\nBam phim bat ky de tiep tuc...");
      getchar();
      getchar();
      break;
    case 3:
      in_sv_nho_tuoi_nhat(danh_sach_sv, *p_so_luong_sv);
      printf("\nBam phim bat ky de tiep tuc...");
      getchar();
      getchar();
      break;
    case 4:
      in_sv_sinh_truoc_nam(danh_sach_sv, *p_so_luong_sv);
      printf("\nBam phim bat ky de tiep tuc...");
      getchar();
      getchar();
      break;
    case 5:
      sap_xep_sv_theo_ten(danh_sach_sv, *p_so_luong_sv);
      printf("\nBam phim bat ky de tiep tuc...");
      getchar();
      getchar();
      break;
    case 6:
      xoa_toan_bo_danh_sach_sinh_vien(danh_sach_sv, p_so_luong_sv);
      printf("\nBam phim bat ky de tiep tuc...");
      getchar();
      getchar();
      break;
    case 0:
      printf("\nTam biet!\n");
      exit(0);
    default:
      continue;
    }

    g_select = 2007; // reset
  };
}
