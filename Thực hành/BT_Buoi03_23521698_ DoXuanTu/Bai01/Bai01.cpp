// Bai01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TamGiac.h"

int main()
{
    float x, y, rad, k,l;
    TamGiac R;
    R.Nhap();
    R.Xuat();
    cout << "\nTinh tien theo vector v(x,y) :  ";
    cin >> x >> y;
    R.TinhTien(x, y);
    R.Xuat();
    cout << "\nGoc quay: rad = ";
    cin >> rad;
    R.Quay(rad);
    R.Xuat();
    cout << "\nNhap he so phong to: ";
    cin >> k;
    R.PhongTo(k);
    R.Xuat();
    cout << "\nNhap he so thu nho: ";
    cin >> l;
    R.Thunho(l);
    R.Xuat();

}

