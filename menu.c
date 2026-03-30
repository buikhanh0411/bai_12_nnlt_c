#include "main.h"
#include <stdio.h>


void loop_menu(struct SinhVien danh_sach_lop[],int *p_so_luong_sv){
    int g_select = 2007; //random :))
    
    while (g_select){
        system("cls"); 
        printf("1. Nhap danh sach sinh vien\n");
        printf("2. Xuat danh sach sinh vien\n");
        printf("3. In sinh vien nho tuoi nhat\n");
        printf("4. In sinh vien sinh truoc nam x\n");
        printf("5. Sap sep sinh vien theo ten\n");
        printf("0. Thoat\n");
        scanf("%i",&g_select);

        switch (g_select){
            case 1:
              nhap_danh_sach_sv(danh_sach_lop,p_so_luong_sv);
              break;
            case 2:
              xuat_danh_sach_sv(danh_sach_lop,*p_so_luong_sv);
              break;
            case 3:
              in_sv_nho_tuoi_nhat(danh_sach_lop,*p_so_luong_sv);
              break;
            case 4:
              in_sv_sinh_truoc_nam(danh_sach_lop,*p_so_luong_sv);
              break;
            case 5:
              sap_sep_sv_theo_ten(danh_sach_lop,*p_so_luong_sv);
              break;
            default:
               system("cls"); //Xoá text ở terminal
               continue;
        }
    };

}
