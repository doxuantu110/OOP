#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class SoPhuc
{
private:
	float fPhanThuc;
	float fPhanAo;
public:
	SoPhuc() {};
	SoPhuc(float fPhanThuc, float fPhanAo) {
		this->fPhanThuc = fPhanThuc;
		this->fPhanAo = fPhanAo;
	};
	void Nhap();
	void Xuat();
	void Cong(SoPhuc);
	void Tru(SoPhuc);
	void Nhan(SoPhuc);
	void Chia(SoPhuc);
};

