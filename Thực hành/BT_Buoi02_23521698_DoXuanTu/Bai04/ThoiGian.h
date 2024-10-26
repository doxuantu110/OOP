#pragma once
#include <iostream>
using namespace std;
class ThoiGian
{
private:
	int iGio;
	int iPhut;
	int iGiay;
public:
	ThoiGian() {};
	ThoiGian(int iGio, int iPhut, int iGiay) {
		this->iGio = iGio;
		this->iPhut = iPhut;
		this->iGiay = iGiay;
	};
	void Nhap();
	void Xuat();
	void setThoiGian(int iGio, int iPhut, int iGiay);
	void setGio(int iGio);
	void setPhut(int);
	void setGiay(int);
	int getGio();
	int getPhut();
	int getGiay();
	void TangGiay(int);
	void TangPhut(int);
	void TangGio(int);
	void GiamGiay(int);
	void GiamPhut(int);
	void GiamGio(int);

};

