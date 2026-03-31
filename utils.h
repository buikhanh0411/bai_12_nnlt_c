#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

struct SinhVien
{
  char ma_sinhvien[20];
  char hodem_sinhvien[20];
  char ten_sinhvien[20];
  int namsinh_sinhvien;
};

void in_sinh_vien(struct SinhVien sv, int stt);
void copy_sinh_vien(struct SinhVien *dest, struct SinhVien src);

#endif
