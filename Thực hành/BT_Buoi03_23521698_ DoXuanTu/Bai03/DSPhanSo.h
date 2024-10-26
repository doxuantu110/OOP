#pragma once
#include <iostream>
#include <vector>
#include "cPhanSo.h"
using namespace std;
class DSPhanSo
{
private:
	vector <cPhanSo> DsPhanSo;
public:
	
	void NhapDSPhanSo();
	void XuatDSPhanSo();
	cPhanSo TinhTong();
	cPhanSo TimMax();
	cPhanSo TimMin();
	void QuickSortTang(int, int);
	void QuickSortGiam(int, int);
	void SapXepTangDan();
	void SapXepGiamDan();
};

