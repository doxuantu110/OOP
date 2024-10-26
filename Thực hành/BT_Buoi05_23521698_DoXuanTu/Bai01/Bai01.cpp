// Bai01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DanhSachNhanVien.h"

int main()
{
    DanhSachNhanVien DS;
    DS.Nhap();
    DS.Xuat();
    cout << "Tong luong ma cong ty phai tra cho cac nhan vien: " << DS.TinhTongLuong() << endl;
}

