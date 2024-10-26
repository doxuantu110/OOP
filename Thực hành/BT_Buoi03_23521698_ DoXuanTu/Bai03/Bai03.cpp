    // Bai03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DSPhanSo.h"

int main()
{
    DSPhanSo DS;
    DS.NhapDSPhanSo();
    DS.XuatDSPhanSo();
    cPhanSo PsMax = DS.TimMax();
    cout << "Phan so lon nhat trong dach : "; PsMax.Xuat();
    cPhanSo PsMin = DS.TimMin();
    cout << "Phan so nho nhat trong dach : "; PsMin.Xuat();
    cPhanSo Sum = DS.TinhTong();
    cout << "Tong cac phan so : "; Sum.Xuat();
    cout << "Danh sach phan so duoc sap xep tang dan: " << endl;
    DS.SapXepTangDan();
    DS.XuatDSPhanSo();
    cout << "Danh sach phan so duoc sap xep giam dan: " << endl;
    DS.SapXepGiamDan();
    DS.XuatDSPhanSo();

}

