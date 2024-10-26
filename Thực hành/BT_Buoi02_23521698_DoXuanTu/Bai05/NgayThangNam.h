#pragma once
#include <iostream>
using namespace std;
class NgayThangNam
{
private:
	int iNgay;
	int iThang;
	int iNam;
public:
	NgayThangNam() {};
	NgayThangNam(int iNgay, int iThang, int iNam) {
		this->iNgay = iNgay;
		this->iThang = iThang;
		this->iNam = iNam;
	};
	void Nhap();
	void Xuat();
	void setNgay(int);
	void setThang(int);
	void setNam(int);
	int getNgay();
	int getThang();
	int getNam();
	void TangNgay(int);
	void TangThang(int);
	void TangNam(int);
	void GiamNgay(int);
	void GiamThang(int);
	void GiamNam(int);
	int ThuTrongTuan();
	bool KiemTraNamNhuan();

};

