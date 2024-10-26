#pragma once
#include <iostream>
using namespace std;
class cArray
{
private:
	int* a;
	int n;
public:
	cArray() {};
	cArray(int n) {
		this->n = n;
		a = new int[n];
	};
	~cArray()
	{
		delete[] a;
	}
	void TaoMang();
	void XuatMang();
	int DemSoLanXuatHien(int x);
	bool KiemTraTangDan();
	int TimLeNhoNhat();
	int TimSNTMax();
	void SapXepTangDan();
	void SapXepGiamDan();
};

