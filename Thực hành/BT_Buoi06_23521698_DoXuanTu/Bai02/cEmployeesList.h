#pragma once
#include "cEmployee.h"
#include "cProgrammer.h"
#include "cTester.h"
#include <vector>
class cEmployeesList
{
private:
	vector<cEmployee*> DSNV;
public:
	cEmployeesList() {};
	void Nhap();
	void Xuat();
	float TinhLuongTB();
	void XuatDSNV_coLuongThap();
	cEmployee* NV_coLuongCaoNhat();
	cEmployee* NV_coLuongThapNhat();
	cEmployee* Programmer_coLuongCaoNhat();
	cEmployee* Tester_coLuongThapNhat();

};

