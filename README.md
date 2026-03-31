# Quản lý sinh viên

Dự án này là một ứng dụng console đơn giản để quản lý danh sách sinh viên, bao gồm các chức năng nhập xuất, sắp xếp, và tìm kiếm thông tin sinh viên.

## Mô tả dự án

Ứng dụng cho phép:
- Nhập và xuất danh sách sinh viên
- Sắp xếp danh sách theo tên
- Tìm sinh viên nhỏ tuổi nhất
- Lọc danh sách sinh viên sinh trước một năm cụ thể (người dùng nhập năm)

## Thành viên và nhiệm vụ

| Thành viên | Nhiệm vụ | File liên quan |
|------------|----------|---------------|
| **Bùi Duy Khanh** (Leader) | Gộp code, tạo menu, tạo cấu trúc dự án | `main.c`, `menu.c`, `CMakeLists.txt`, cấu trúc thư mục |
| **@Cong Vo** | Nhập xuất danh sách sinh viên | `nhap_danh_sach_sv.c`, `xuat_danh_sach_sv.c` |
| **@Đức Văn** | Đưa danh sách sinh viên trước năm (người dùng nhập số năm) | `in_sv_sinh_truoc_nam.c` |
| **@Nguyễn Đức Cường** | Đưa ra sinh viên nhỏ tuổi nhất | `in_sv_nho_tuoi_nhat.c` |
| **@Đặng Duy** | Sắp xếp lại danh sách theo thứ tự tăng dần của tên | `sap_xep_sv_theo_ten.c` |

## Cấu trúc dự án

```
bai_12_nnlt_c/
├── CMakeLists.txt
├── README.md
├── build/ (thư mục build)
├── src/
│   ├── core/ (logic chính)
│   │   ├── main.c
│   │   ├── main.h
│   │   ├── menu.c
│   │   ├── nhap_danh_sach_sv.c
│   │   ├── sap_xep_sv_theo_ten.c
│   │   ├── xuat_danh_sach_sv.c
│   │   ├── in_sv_nho_tuoi_nhat.c
│   │   └── in_sv_sinh_truoc_nam.c
│   └── utils/ (tiện ích)
│       ├── utils.h
│       ├── display.c
│       └── copy.c
└── test
```

## Cách build và chạy

### Sử dụng CMake (Khuyên dùng):
```bash
mkdir -p build && cd build
cmake ..
make
./student_manager</code></pre>
  </li>
  <li>
      <b>GCC (Nhanh):</b>
      <pre><code>gcc *.c -o student_manager
./student_manager</code></pre>
  </li>
</ul>

## Các thành viên
1. [Bùi Duy Khanh](https://github.com/buikhanh0411)
2. [Võ Anh Công](https://github.com/cong2812)
3. [Đặng Bá Duy](https://github.com/Duy292007)
4. [Nguyễn Đức Cường](https://github.com/Cuong0408)
5. [Đào Đức Văn](https://github.com/Van171207)
