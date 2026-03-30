#include "main.h"

void nhap_danh_sach_sv(struct SinhVien danh_sach_lop[], int *p_so_luong_sv) {
  printf("Nhap so luong sinh vien: ");
  scanf("%i", p_so_luong_sv);

  getchar();

  for (int i = 0; i < *p_so_luong_sv; i++) {

    printf("Nhap ma sinh vien: ");
    scanf("%s", danh_sach_lop[i].ma_sinhvien);
    getchar();

    printf("Nhap ho dem sinh vien: ");
    scanf(" %[^\n]", danh_sach_lop[i].hodem_sinhvien);

    printf("Nhap ten sinh vien: ");
    scanf(" %[^\n]", danh_sach_lop[i].ten_sinhvien);

    printf("Nhap nam sinh sinh vien: ");
    scanf("%d", &danh_sach_lop[i].namsinh_sinhvien);
    getchar();
  };

  // Sort theo ma_sinhvien
  for (int i = 0; i < *p_so_luong_sv - 1; i++) {
    for (int j = i + 1; j < *p_so_luong_sv; j++) {
      if (strcmp(danh_sach_lop[i].ma_sinhvien, danh_sach_lop[j].ma_sinhvien) >
          0) {
        struct SinhVien temp = danh_sach_lop[i];
        danh_sach_lop[i] = danh_sach_lop[j];
        danh_sach_lop[j] = temp;
      }
    }
  }
}
