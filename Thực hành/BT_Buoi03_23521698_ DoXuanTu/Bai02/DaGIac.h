#pragma once
#include "cDiem.h"
#include <vector>
class DaGiac
{
private:
	vector<cDiem> Dinh;
public:
	DaGiac() {};
	DaGiac(cDiem, cDiem, cDiem) {};
	~DaGiac() {};
	void Nhap();
	void Xuat();
	void TinhTien(float, float);
	void Quay(float GocQuay);
	void PhongTo(float);
	void Thunho(float);
};


