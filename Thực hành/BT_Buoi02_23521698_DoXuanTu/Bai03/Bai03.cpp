// Bai03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "SoPhuc.h"

int main()
{
    SoPhuc A,B;
    cout << "Nhap phan thuc va phan ao cua so phuc thu nhat: ";
    A.Nhap();
    cout << "Nhap phan thuc va phan ao cua so phuc thu hai: ";
    B.Nhap();
    
    SoPhuc Tong = A;
    Tong.Cong(B);
    cout << "Phep cong hai so phuc : ";
    Tong.Xuat();

    SoPhuc Hieu = A;
    Hieu.Tru(B);
    cout << "Phep tru hai so phuc : ";
    Hieu.Xuat();

    SoPhuc Tich = A;
    Tich.Nhan(B);
    cout << "Phep nhan hai so phuc: ";
    Tich.Xuat();

    SoPhuc Thuong = A;
    Thuong.Nhan(B);
    cout << "Phep chia hai so phuc: ";
    Thuong.Xuat();


}

