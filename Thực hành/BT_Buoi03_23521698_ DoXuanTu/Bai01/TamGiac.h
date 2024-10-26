#pragma once
#include "cDiem.h"
class TamGiac
{
private:
	cDiem A, B, C;
public:
	TamGiac() {};
	TamGiac(cDiem, cDiem, cDiem) {};
	~TamGiac() {};
	void Nhap();
	void Xuat();
	void TinhTien(float, float);
	void Quay(float GocQuay);
	void PhongTo(float);
	void Thunho(float);

};
