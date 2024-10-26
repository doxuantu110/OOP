#pragma once
#include <iostream>
#include <string>
using namespace std;
class Nguoi
{
protected:
	string HoTen;
	string NgaySinh;
	string GioiTinh;
public:
	Nguoi() {};
	void Nhap();
	void Xuat();
};

