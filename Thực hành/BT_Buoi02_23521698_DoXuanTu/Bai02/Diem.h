#pragma once
#include <iostream>
using namespace std;
class Diem
{
private :
	float fHoanhDo;
	float fTungDo;
public:
	Diem() {};
	Diem(float fHoangDo, float fTungDo) {
		this->fHoanhDo = fHoangDo;
		this->fTungDo = fTungDo;
	};
	void setHoanhDo(float);
	void setTungDo(float);
	float getHoanhDo();
	float getTungDo();
	void NhapMotDiem();
	void XuatMotDiem();
	void TinhTien(float, float);
};

