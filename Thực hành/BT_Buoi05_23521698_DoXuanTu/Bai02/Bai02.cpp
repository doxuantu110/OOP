// Bai02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DanhSachSV.h"

int main()
{
	DanhSachSV DS;
	DS.Nhap();
	DS.Xuat();
	DS.XuatDSSVDuDieuKienTN();
	DS.XuatDSSVKhongDuDieuKienTN();
	cout << "\nSinh vien dai hoc co diem trung binh cao nhat: " << endl;
	DS.SVCoDiemTBMax().Xuat();
}

