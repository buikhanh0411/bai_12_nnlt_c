#include "main.h"

void in_sv_nho_tuoi_nhat(struct SinhVien danh_sach_lop[], int p_so_luong_sv)
{
  printf("in so luong sinh vien");

  // Copy mang sinh vien (tranh anh huong vao mang chinh)
  struct SinhVien cp_danh_sach_lop[p_so_luong_sv];
  for (int i = 0; i < p_so_luong_sv; i++)
  {
    cp_danh_sach_lop[i] = danh_sach_lop[i];
  }

  int max = cp_danh_sach_lop[0].namsinh_sinhvien;

  for (int i = 1; i < p_so_luong_sv; i++)
  {
    if (cp_danh_sach_lop[i].namsinh_sinhvien > max)
    {
      max = cp_danh_sach_lop[i].namsinh_sinhvien;
    }
  }

  printf("\nSinh vien nho tuoi nhat:\n");

  for (int i = 0; i < p_so_luong_sv; i++)
  {
    if (cp_danh_sach_lop[i].namsinh_sinhvien == max)
    {
      printf(
          "%s %s %s %d\n",
          cp_danh_sach_lop[i].ma_sinhvien,
          cp_danh_sach_lop[i].hodem_sinhvien,
          cp_danh_sach_lop[i].ten_sinhvien,
          cp_danh_sach_lop[i].namsinh_sinhvien);
    }
  }
}
