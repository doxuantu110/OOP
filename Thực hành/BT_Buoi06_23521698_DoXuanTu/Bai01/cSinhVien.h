#pragma once
#include <iostream>
#include <string>
using namespace std;
class cSinhVien
{
protected:
	string MSSV;
	string HoTen;
	string DiaChi;
	int TongSoTin;
	float DiemTB;
public:
	cSinhVien() {};
	virtual	void Nhap();
	virtual	void Xuat();
	virtual bool XetTotNghiep() = 0;
	virtual int getLoai() = 0;
	virtual float getDiemTB() = 0;
	virtual ~cSinhVien() {};
};

