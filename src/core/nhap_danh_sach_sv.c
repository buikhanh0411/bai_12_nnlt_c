#include "main.h"
#include "../utils/utils.h"

void nhap_danh_sach_sv(struct SinhVien danh_sach_sv[], int *p_so_luong_sv)
{
    int n = 0;
    CLEAR_SCREEN();
    printf("==========================================\n");
    printf("     NHAP DANH SACH SINH VIEN MOI\n");
    printf("==========================================\n");

    do {
        printf("Nhap so luong sinh vien can them (0 < n <= %d): ", 50 - *p_so_luong_sv);
        if (scanf("%d", &n) != 1 || n <= 0 || n > 50 - *p_so_luong_sv) {
            scanf("%*s"); 
            printf("[!] So luong khong hop le. Vui long nhap lai.\n");
            n = 0; 
        }
    } while (n == 0);

    for (int i = 0; i < n; i++)
    {
        printf("\n[ Sinh vien thu %d ]\n", (*p_so_luong_sv) + 1);

        do {
            printf(" + Ma sinh vien: ");
            if (scanf("%19s", danh_sach_sv[*p_so_luong_sv].ma_sinhvien) != 1) {
                scanf("%*s");
                printf("[!] Ma sinh vien khong duoc de trong. Nhap lai.\n");
            } else if (strlen(danh_sach_sv[*p_so_luong_sv].ma_sinhvien) == 0) {
                printf("[!] Ma sinh vien khong duoc de trong. Nhap lai.\n");
            } else {
                break;
            }
        } while (1);

        do {
            printf(" + Ho va ten dem: ");
            if (scanf(" %19[^\n]", danh_sach_sv[*p_so_luong_sv].hodem_sinhvien) != 1) {
                scanf("%*s");
                printf("[!] Ho dem khong hop le. Nhap lai.\n");
            } else if (strlen(danh_sach_sv[*p_so_luong_sv].hodem_sinhvien) == 0) {
                printf("[!] Ho dem khong duoc de trong. Nhap lai.\n");
            } else {
                break;
            }
        } while (1);

        do {
            printf(" + Ten: ");
            if (scanf("%19s", danh_sach_sv[*p_so_luong_sv].ten_sinhvien) != 1) {
                scanf("%*s");
                printf("[!] Ten khong hop le. Nhap lai.\n");
            } else if (strlen(danh_sach_sv[*p_so_luong_sv].ten_sinhvien) == 0) {
                printf("[!] Ten khong duoc de trong. Nhap lai.\n");
            } else {
                break;
            }
        } while (1);

        do {
            printf(" + Nam sinh: ");
            if (scanf("%d", &danh_sach_sv[*p_so_luong_sv].namsinh_sinhvien) != 1 || 
                danh_sach_sv[*p_so_luong_sv].namsinh_sinhvien < 1900 || 
                danh_sach_sv[*p_so_luong_sv].namsinh_sinhvien > 2026) {
                scanf("%*s");
                printf("[!] Nam sinh phai la so (1900 - 2026). Nhap lai.\n");
            } else {
                break;
            }
        } while (1);

        (*p_so_luong_sv)++; 
    }

    printf("\n[v] Hoan tat! Da them %d sinh vien.\n", n);
    printf("Nhan Enter de in danh sach...");
    getchar(); 
    getchar(); 

    printf("\nDanh sach sinh vien da nhap:\n");
    in_danh_sach_sv(danh_sach_sv, *p_so_luong_sv);
}