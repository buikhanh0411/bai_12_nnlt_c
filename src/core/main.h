#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../utils/utils.h"

// \e[1;1H: dua con tro ve goc tren ben trai
// \e[2J: xoa toan bo man hinh
#define CLEAR_SCREEN() printf("\033[H\033[J")

void loop_menu(struct SinhVien danh_sach_sv[], int *p_so_luong_sv);
void nhap_danh_sach_sv(struct SinhVien danh_sach_sv[], int *p_so_luong_sv);
void xuat_danh_sach_sv(struct SinhVien danh_sach_sv[], int p_so_luong_sv);
void in_sv_nho_tuoi_nhat(struct SinhVien danh_sach_sv[], int p_so_luong_sv);
void in_sv_sinh_truoc_nam(struct SinhVien danh_sach_sv[], int p_so_luong_sv);
void sap_xep_sv_theo_ten(struct SinhVien danh_sach_sv[], int p_so_luong_sv);
