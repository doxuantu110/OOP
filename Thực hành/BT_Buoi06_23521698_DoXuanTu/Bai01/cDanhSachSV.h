#pragma once
#include "cSVCaoDang.h"
#include "cSVDaiHoc.h"
#include <vector>
class cDanhSachSV
{
private:
	vector<cSinhVien*> DS;
	
public:
	cDanhSachSV() {};
	void Nhap();
	void Xuat();
	void XuatDSSVDuDieuKienTN();
	void XuatDSSVKhongDuDieuKienTN();
	cSinhVien* SVDHCoDiemTBMax();
	cSinhVien* SVCDCoDiemTBMax();
	static int SoSVDHKhongDuDKTN;
	static int SoSVCDKhongDuDKTN;
};

