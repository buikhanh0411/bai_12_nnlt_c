#include "main.h"
#include "../utils/utils.h"

void sap_xep_sv_theo_ten(struct SinhVien danh_sach_sv[], int p_so_luong_sv)
{

  // Copy mang sinh vien (tranh anh huong vao mang chinh)
  struct SinhVien cp_danh_sach_lop[p_so_luong_sv];
  for (int i = 0; i < p_so_luong_sv; i++)
  {
    copy_sinh_vien(&cp_danh_sach_lop[i], danh_sach_sv[i]);
  }

  for (int i = 0; i < p_so_luong_sv - 1; i++)
  {
    for (int j = 0; j < p_so_luong_sv - i - 1; j++)
    {
      if (strcmp(cp_danh_sach_lop[j].ten_sinhvien,
                 cp_danh_sach_lop[j + 1].ten_sinhvien) > 0)
      {
        // hoán đổi toàn bộ struct
        struct SinhVien temp;
        copy_sinh_vien(&temp, cp_danh_sach_lop[j]);
        copy_sinh_vien(&cp_danh_sach_lop[j], cp_danh_sach_lop[j + 1]);
        copy_sinh_vien(&cp_danh_sach_lop[j + 1], temp);
      }
    }
  }

  printf("Danh sach sinh vien sau khi sap xep theo ten:\n");
  in_danh_sach_sv(cp_danh_sach_lop, p_so_luong_sv);
}
