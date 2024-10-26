// Bai04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cArray.h"

int main()
{
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    cArray a(n);
    a.TaoMang();
    a.XuatMang();
    int x; 
    cout << "Nhap gia tri can dem so lan xuat hien : ";
    cin >> x;

    cout << "So lan xuat hien cua " << x << " : " << a.DemSoLanXuatHien(x) << endl;

    if (a.KiemTraTangDan()) cout << "Mang tang dan." << endl;
    else cout << "Mang khong tang dan." << endl;

    cout << "Phan le nho nhat trong mang: " << a.TimLeNhoNhat() << endl;
    cout << "So nguyen to lon nhat trong mang: " <<a.TimSNTMax() << endl;

    cout << "Mang sap xep tang dan: ";
    a.SapXepTangDan();
    a.XuatMang();
    cout << "Mang sap xep giam dan: ";
    a.SapXepGiamDan();
    a.XuatMang();


}
