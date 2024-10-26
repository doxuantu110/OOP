// Bai02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DaGIac.h"

int main()
{
    float x, y, Rad, k, l;
    DaGiac D;
    D.Nhap();
    D.Xuat();
    cout << "\nTinh tien theo vectoD v(x,y) :  ";
    cin >> x >> y;
    D.TinhTien(x, y);
    D.Xuat();
    cout << "\nGoc quay: Rad = ";
    cin >> Rad;
    D.Quay(Rad);
    D.Xuat();
    cout << "\nNhap he so phong to: ";
    cin >> k;
    D.PhongTo(k);
    D.Xuat();
    cout << "\nNhap he so thu nho: ";
    cin >> l;
    D.Thunho(l);
    D.Xuat();
}

