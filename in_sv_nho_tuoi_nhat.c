#include "main.h"

void in_sv_nho_tuoi_nhat(struct SinhVien danh_sach_lop[],int p_so_luong_sv){
   printf("in so luong sinh vien");
}
 int max = sv[0].namsinh;

    for(int i=1;i<n;i++){
        if(sv[i].namsinh > max){
            max = sv[i].namsinh;
        }
    }

    printf("\nSinh vien nho tuoi nhat:\n");

    for(int i=0;i<n;i++){
        if(sv[i].namsinh == max){
            printf("%s %s %s %d\n",
            sv[i].masv,
            sv[i].hodem,
            sv[i].ten,
            sv[i].namsinh);
        }
    }
}