#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private: 
	int iTuSo;
	int iMauSo;
public:
	PhanSo() {};
	PhanSo(int iTuSo, int iMauSo) {
		this->iTuSo = iTuSo;
		this->iMauSo = iMauSo;
	};
	void Nhap();
	void Xuat();
	void Cong(PhanSo A);
	void Tru(PhanSo A);
	void Nhan(PhanSo A);
	void Chia(PhanSo A);
	void ToiGianPhanSo(PhanSo& A);
	void DinhGiaTriChoPhanSo(PhanSo A);
};

