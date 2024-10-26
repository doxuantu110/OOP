#pragma once
#include <iostream>
using namespace std;
class cPhanSo
{
private:
	int iTuSo;
	int iMauSo;
public:
	cPhanSo() {};
	cPhanSo(int iTuSo, int iMauSo) {
		this->iTuSo = iTuSo;
		this->iMauSo = iMauSo;
	}
	void setPhanSo(int iTuSo, int iMauSo) {
		this->iTuSo = iTuSo;
		this->iMauSo = iMauSo;
	}
	void setTuSo(int iTuSo) {
		this->iTuSo = iTuSo;
	}
	void setMauSo(int iMauSo) {
		this->iMauSo = iMauSo;
	}
	int getTuSo() {
		return iTuSo;
	}
	int getMauSo() {
		return iMauSo;
	}
	void ToiGianPhanSo(cPhanSo& PhanSo);
	void Nhap();
	void Xuat();
	double getValue();
};

