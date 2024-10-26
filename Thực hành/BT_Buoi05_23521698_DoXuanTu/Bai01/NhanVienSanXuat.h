#pragma once
#include "cNhanVien.h"
class NhanVienSanXuat :
    public cNhanVien
{
private:
    int LuongCanBan;
    int SoSanPham;
public:
    NhanVienSanXuat() {};
    void Nhap();
    void Xuat();
    static const int DonGia = 5000;
    int TinhLuong();
};

