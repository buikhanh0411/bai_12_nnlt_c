#include "../utils/utils.h"

void in_sv_nho_tuoi_nhat(struct SinhVien danh_sach_lop[], int p_so_luong_sv)
{

  // Copy mang sinh vien (tranh anh huong vao mang chinh)
  struct SinhVien cp_danh_sach_lop[p_so_luong_sv];

  int count = 0;
  struct SinhVien ans_danh_sach_lop[p_so_luong_sv];

  for (int i = 0; i < p_so_luong_sv; i++)
  {
    copy_sinh_vien(&cp_danh_sach_lop[i], danh_sach_lop[i]);
  }

  int max = cp_danh_sach_lop[0].namsinh_sinhvien;

  for (int i = 1; i < p_so_luong_sv; i++)
  {
    if (cp_danh_sach_lop[i].namsinh_sinhvien > max)
    {
      max = cp_danh_sach_lop[i].namsinh_sinhvien;
    }
  };

  printf("\nSinh vien nho tuoi nhat:\n");

  for (int i = 0; i < p_so_luong_sv; i++)
  {
    if (cp_danh_sach_lop[i].namsinh_sinhvien == max)
    {
      ans_danh_sach_lop[count] = cp_danh_sach_lop[i];
      count++;
    }
  };

  if (count == 0)
  {
    printf("Khong co sinh vien nao!\n");
  }
  else
  {
    in_danh_sach_sv(ans_danh_sach_lop, count);
  }
}
