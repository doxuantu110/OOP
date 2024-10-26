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
	void Nhap();
	void Xuat();
	float getDiemTB();
};

