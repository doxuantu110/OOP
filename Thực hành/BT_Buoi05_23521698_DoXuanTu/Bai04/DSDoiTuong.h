#pragma once
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaSi.h"
#include <vector>
class DSDoiTuong
{
private:
	vector <SinhVien> DSSinhVien;
	vector <HocSinh> DSHocSinh;
	vector <CongNhan> DSCongNhan;
	vector <NgheSi> DSNgheSi;
	vector <CaSi> DSCaSi;
public:
	DSDoiTuong() {};
	void Nhap();
	void Xuat();
};

