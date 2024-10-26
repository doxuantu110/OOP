#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class cEmployee
{
	
protected:
	string MaNV;
	string HoTen;
	int Tuoi;
	string SDT;
	string Email;
	float LuongCoBan;
public:
	cEmployee() {};
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhLuong() = 0;
	virtual int getLoai() = 0;
	virtual ~cEmployee() {};
};

