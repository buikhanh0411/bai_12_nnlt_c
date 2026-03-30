#include "main.h"

void xuat_danh_sach_sv(struct SinhVien danh_sach_lop[],int p_so_luong_sv){

    printf("\nDanh sach sinh vien:\n");
    printf("%-10s %-30s %-20s %-10s\n", "Ma SV", "Ho Dem Sinh Vien", "Ten Sinh Vien", "Nam Sinh");
    for (int i = 0; i < p_so_luong_sv; i++) {
        printf("%-10s %-30s %-20s %-10d\n",
               danh_sach_lop[i].ma_sinhvien,
               danh_sach_lop[i].hodem_sinhvien,
               danh_sach_lop[i].ten_sinhvien,
               danh_sach_lop[i].namsinh_sinhvien);
    }
}
    
