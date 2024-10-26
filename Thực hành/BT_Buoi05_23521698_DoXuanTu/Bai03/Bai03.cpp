// Bai03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Nguoi.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaSi.h"
int main()
{
	SinhVien SV;
	HocSinh HS;
	CongNhan CN;
	NgheSi NS;
	CaSi CS;
	cout << "Nhap thong tin Sinh vien: " << endl;
	SV.Nhap();
	cout << "\nThong tin Sinh vien: " << endl;
	SV.Xuat();
	cout << "\nNhap thong tin Hoc sinh: " << endl;
	HS.Nhap();
	cout << "\nThong tin Hoc sinh: " << endl;
	HS.Xuat();
	cout << "\nNhap thong tin Cong Nhan: " << endl;
	CN.Nhap();
	cout << "\nThong tin Cong Nhan: " << endl;
	CN.Xuat();
	cout << "\nNhap thong tin Nghe Si: " << endl;
	NS.Nhap();
	cout << "\nThong tin Nghe Si: " << endl;
	NS.Xuat();
	cout << "\nNhap thong tin Ca Si: " << endl;
	CS.Nhap();
	cout << "\nThong tin Ca Si: " << endl;
	CS.Xuat();
}

