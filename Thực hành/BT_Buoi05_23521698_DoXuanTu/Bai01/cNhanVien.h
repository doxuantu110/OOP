#pragma once
#include <iostream>
#include <string>
using namespace std;
class cNhanVien
{
protected:
	string HoTen;
	string NgaySinh;
public:
	cNhanVien() {};
	void Nhap();
	void Xuat();
};

