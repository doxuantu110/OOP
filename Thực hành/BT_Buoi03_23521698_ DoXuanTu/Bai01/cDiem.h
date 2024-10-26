#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class cDiem
{
private:
	float x, y;
public:
	cDiem() {};
	cDiem(float x, float y);
	//~cDiem() {};
	void Nhap();
	void Xuat();
	void setxy(float x, float y);
	float getx();
	float gety();
	cDiem Vector(cDiem);
	void TinhTien(float, float);
	void Quay(float Goc);
	
};

