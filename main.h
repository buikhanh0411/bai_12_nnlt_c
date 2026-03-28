#pragma once

struct SinhVien {
   char ma_sinhvien[200];
   char hodem_sinhvien[200];
   char ten_sinhvien[200];
   int namsinh_sinhvien;
};

void loop_menu();

void nhap_danh_sach_sv(struct SinhVien danh_sach_lop[],int *so_luong);
void xuat_danh_sach_sv(struct SinhVien danh_sach_lop[],int so_luong);

void in_sv_nho_tuoi_nhat(struct SinhVien danh_sach_lop[],int so_luong);
void in_sv_sinh_truoc_nam(struct SinhVien danh_sach_lop[],int so_luong);
void sap_sep_sv_theo_ten(struct SinhVien danh_sach_lop[],int so_luong);

