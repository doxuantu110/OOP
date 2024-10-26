#pragma once
#include "Bo.h"
#include "De.h"
#include "Cuu.h"
#include "GiaSuc.h"
#include <vector>
class ThongKe
{
private:
	vector <Bo> LuongBo;
	vector <Cuu> LuongCuu;
	vector <De> LuongDe;
public:
	void Nhap();
	void GiaSucKeu();
	void XuatSoLuongMoiLoai();
	float TongSoLitSua();
};

