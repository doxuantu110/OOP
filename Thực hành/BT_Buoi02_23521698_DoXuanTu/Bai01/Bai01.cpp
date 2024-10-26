// Bai01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cPhanSo.h"

int main()
{
    PhanSo PS1, PS2;
    cout << "Nhap tu va mau cua phan so thu nhat : ";
    PS1.Nhap();
    cout << "Nhap tu va mau cua phan so thu hai : ";
    PS2.Nhap();

    cout << "Phep cong hai phan so: ";
    PhanSo Tong;
    Tong = PS1;
    Tong.Cong(PS2);
    Tong.ToiGianPhanSo(Tong);
    Tong.Xuat();
    cout << endl;

    cout << "Phep tru hai phan so: ";
    PhanSo Hieu;
    Hieu = PS1;
    Hieu.Tru(PS2);
    Hieu.ToiGianPhanSo(Hieu);
    Hieu.Xuat();
    cout << endl;

    cout << "Phep nhan hai phan so: ";
    PhanSo Tich;
    Tich = PS1;
    Tich.Nhan(PS2);
    Tich.ToiGianPhanSo(Tich);
    Tich.Xuat();
    cout << endl;

    cout << "Phep chia hai phan so:  ";
    PhanSo Thuong;
    Thuong = PS1;
    Thuong.Chia(PS2);
    Thuong.ToiGianPhanSo(Thuong);
    Thuong.Xuat();

    return 0;
}