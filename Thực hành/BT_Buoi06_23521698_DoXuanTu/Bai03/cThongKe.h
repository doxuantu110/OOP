#pragma once
#include "cGiaSuc.h"
#include "cBo.h"
#include "cDe.h"
#include "cCuu.h"
#include <vector>
class cThongKe
{
private:
	vector <cGiaSuc*> ThongKe;
public:
	cThongKe() {};
	void Nhap();
	void Keu();
	void XuatSLMoiLoai();
	int TongLitSua();
};

