#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class DonThuc
{
private:
	float fHeSo;
	float fBac;
public:
	DonThuc() {};
	DonThuc(float fBac, float fHeSo) {};
	float getHeSo()const;
	float getBac()const;
	void setBac(float fBac);
	void setHeSo(float fHeSo);
	void Nhap();
	void Xuat();
	float TinhGiaTri(float x);
	DonThuc Cong(DonThuc DT);
	DonThuc Tru(DonThuc DT);
};

