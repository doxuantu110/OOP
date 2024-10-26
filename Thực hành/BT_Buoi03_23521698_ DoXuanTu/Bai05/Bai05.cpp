// Bai05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DaThuc.h"

int main()
{
    DaThuc y, Tong, Hieu;
    int x;
    y.NhapDaThuc();
    y.XuatDaThuc();
    cout << "Nhap gia tri cua x:  ";
    cin >> x;
    cout << "Gia tri cua y khi x = " << x << " : " << y.TinhGiaTriDaThuc(x) << endl;
    DaThuc F;
    cout << "Nhap da thuc thu hai : " << endl;
    F.NhapDaThuc();
    cout << "Da thuc hai : " << endl;
    F.XuatDaThuc();
    cout << "Tong hai da thuc : ";
    Tong = y.Cong(F);
    Tong.XuatDaThuc();
    cout << "Hieu hai da thuc: ";
    Hieu = y.Tru(F);
    Hieu.XuatDaThuc();
}

