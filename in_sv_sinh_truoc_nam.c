#include "main.h"
#include "utils.h"

void in_sv_sinh_truoc_nam(struct SinhVien danh_sach_lop[], int p_so_luong_sv)
{
    int nam;

    // Copy mang sinh vien (tranh anh huong vao mang chinh)
    struct SinhVien cp_danh_sach_lop[p_so_luong_sv];

    int count = 0;
    struct SinhVien ans_danh_sach_lop[p_so_luong_sv];

    for (int i = 0; i < p_so_luong_sv; i++)
    {
        copy_sinh_vien(&cp_danh_sach_lop[i], danh_sach_lop[i]);
    }

    printf("\nNhap nam moc: ");
    scanf("%d", &nam);

    printf("\nDanh sach sinh vien sinh truoc nam %d:\n", nam);

    int found = 0;

    for (int i = 0; i < p_so_luong_sv; i++)
    {
        if (danh_sach_lop[i].namsinh_sinhvien < nam)
        {
            ans_danh_sach_lop[count] = danh_sach_lop[i];
            count++;
            found = 1;
        }
    }
    
    //Output
    if (!found)
    {
        printf("Khong co sinh vien nao thoa man!\n");
    }
    else
    {
        in_danh_sach_sv(ans_danh_sach_lop, count);
    }
}