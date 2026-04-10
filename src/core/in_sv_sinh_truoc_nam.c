#include "../utils/utils.h"
#include "main.h"

void in_sv_sinh_truoc_nam(struct SinhVien danh_sach_sv[], int so_luong_sv) {
  int nam;

  // Copy mang sinh vien (tranh anh huong vao mang chinh)
  struct SinhVien cp_danh_sach_sv[so_luong_sv];

  int count = 0;
  struct SinhVien ans_danh_sach_sv[so_luong_sv];

  for (int i = 0; i < so_luong_sv; i++) {
    copy_sinh_vien(&cp_danh_sach_sv[i], danh_sach_sv[i]);
  }

  printf("\nNhap nam moc: ");
  scanf("%d", &nam);

  printf("\nDanh sach sinh vien sinh truoc nam %d:\n", nam);

  int found = 0;

  for (int i = 0; i < so_luong_sv; i++) {
    if (danh_sach_sv[i].namsinh_sinhvien < nam) {
      ans_danh_sach_sv[count] = danh_sach_sv[i];
      count++;
      found = 1;
    }
  }

  // Output
  if (!found) {
    printf("Khong co sinh vien nao thoa man!\n");
  } else {
    in_danh_sach_sv(ans_danh_sach_sv, count);
  }
}
