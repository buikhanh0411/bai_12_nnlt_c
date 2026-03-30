#include "main.h"

void nhap_danh_sach_sv(struct SinhVien danh_sach_lop[],int *p_so_luong_sv){
    printf("nhap so luong sinh vien: ");
    scanf("%i",p_so_luong_sv);
    for (int i = 0; i < *p_so_luong_sv; i++){
        printf("nhap ma sinh vien: ");
        scanf("%s",danh_sach_lop[i].ma_sinhvien);
        printf("nhap ho dem sinh vien: ");
        scanf("%s",danh_sach_lop[i].hodem_sinhvien);
        printf("nhap ten sinh vien: ");
        scanf("%s",danh_sach_lop[i].ten_sinhvien);
        printf("nhap nam sinh sinh vien: ");
        scanf("%i",&danh_sach_lop[i].namsinh_sinhvien);
    };
    for (int i = 0; i < so_luong_sv - 1; i++) {
        for (int j = i + 1; j < so_luong_sv; j++) {
            if (strcmp(danh_sach_lop[i].ma_sinhvien, danh_sach_lop[j].ma_sinhvien) > 0) {
                struct SinhVien temp = danh_sach_lop[i];
                danh_sach_lop[i] = danh_sach_lop[j];
                danh_sach_lop[j] = temp;
            }
        }
    }
}