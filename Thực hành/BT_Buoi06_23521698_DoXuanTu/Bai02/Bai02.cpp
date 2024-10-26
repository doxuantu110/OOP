// Bai02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cEmployeesList.h"

int main()
{
    cEmployeesList DS;
    DS.Nhap();
    DS.Xuat();
    DS.XuatDSNV_coLuongThap();
    cout << "\nNhan vien co luong cao nhat Cong ty: " << endl;
    DS.NV_coLuongCaoNhat()->Xuat();
    cout << "\nNhan vien co luong thap nhat Cong ty: " << endl;
    DS.NV_coLuongThapNhat()->Xuat();
    cout << "\nLap trinh vien co luong cao nhat: " << endl;
    DS.Programmer_coLuongCaoNhat()->Xuat();
    cout << "\nKiem chung vien co luong thap nhat: " << endl;
    DS.Tester_coLuongThapNhat()->Xuat();
}

