#pragma once
#include "SVCaoDang.h"
#include "SVDaiHoc.h"
#include <vector>
class DanhSachSV
{
private:
	vector<SVCaoDang> DSCaoDang;
	vector<SVDaiHoc> DSDaiHoc;
public:
	DanhSachSV() {};
	void Nhap();
	void Xuat();
	void XuatDSSVDuDieuKienTN();
	void XuatDSSVKhongDuDieuKienTN();
	SVDaiHoc SVCoDiemTBMax();
	
};

