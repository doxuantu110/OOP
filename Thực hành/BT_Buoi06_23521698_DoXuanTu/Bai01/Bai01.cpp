// Bai01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cDanhSachSV.h"

int main()
{
	cDanhSachSV Ds;
	Ds.Nhap();
	Ds.Xuat();
	cout << endl;
	Ds.XuatDSSVDuDieuKienTN();
	Ds.XuatDSSVKhongDuDieuKienTN();
	cout << "Sinh vien Dai hoc co diem trung binh cao nhat la: " << endl;
	Ds.SVDHCoDiemTBMax()->Xuat();
	cout << "Sinh vien Cao dang co diem trung binh cao nhat la: " << endl;
	Ds.SVCDCoDiemTBMax()->Xuat();
	cout << "________________________________________" << endl;
	cout << "So luong sinh vien khong du dieu kien tot nghiep: " << endl;
	cout << "He Cao dang: " << Ds.SoSVCDKhongDuDKTN << endl;
	cout << "He Dai hoc: " << Ds.SoSVDHKhongDuDKTN << endl;
}

