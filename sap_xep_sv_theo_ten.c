#include "main.h"


void sap_sep_sv_theo_ten(struct SinhVien danh_sach_lop[], int p_so_luong_sv)
{
    for (int i = 0; i < p_so_luong_sv - 1; i++)
    {
        for (int j = 0; j < p_so_luong_sv - i - 1; j++)
        {
            if (strcmp(danh_sach_lop[j].ten_sinhvien,
                       danh_sach_lop[j + 1].ten_sinhvien) > 0)
            {
                // hoán đổi toàn bộ struct
                struct SinhVien temp = danh_sach_lop[j];
                danh_sach_lop[j] = danh_sach_lop[j + 1];
                danh_sach_lop[j + 1] = temp;
            }
        }
    }
}
for (int i = 0; i < p_so_luong_sv; i++)
    {
        printf("%s | %s | %s | %d\n",
               danh_sach_lop[i].ma_sinhvien,
               danh_sach_lop[i].hodem_sinhvien,
               danh_sach_lop[i].ten_sinhvien,
               danh_sach_lop[i].namsinh_sinhvien);
    }
}

