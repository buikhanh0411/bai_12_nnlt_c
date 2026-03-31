#include "main.h"

void nhap_danh_sach_sv(struct SinhVien danh_sach_lop[], int *p_so_luong_sv) {
  int n;
  CLEAR_SCREEN();
  printf("==========================================\n");
  printf("     NHAP DANH SACH SINH VIEN MOI\n");
  printf("==========================================\n");
  printf("Nhap so luong sinh vien can them: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("\n[ Sinh vien thu %d ]\n", (*p_so_luong_sv) + 1);

    printf(" + Ma sinh vien: ");
    scanf("%s", danh_sach_lop[*p_so_luong_sv].ma_sinhvien);

    printf(" + Ho va ten dem: ");
    // Dung " %[^ \n]" de bo qua ky tu xuong dong va nhap ca chuoi
    scanf(" %[^\n]", danh_sach_lop[*p_so_luong_sv].hodem_sinhvien);

    printf(" + Ten: ");
    scanf("%s", danh_sach_lop[*p_so_luong_sv].ten_sinhvien);

    printf(" + Nam sinh: ");
    scanf("%d", &danh_sach_lop[*p_so_luong_sv].namsinh_sinhvien);

    (*p_so_luong_sv)++;
  }
  printf("\n[v] Hoan tat! Da them %d sinh vien.\n", n);
  printf("Nhan Enter de quay lai menu...");
  getchar();
  getchar(); // Dung 2 lan de cho nguoi dung nhan phim

  //sort
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
