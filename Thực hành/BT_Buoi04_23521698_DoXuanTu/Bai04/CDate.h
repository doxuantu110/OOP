#pragma once
#include <iostream>
using namespace std;
class CDate
{
private:
	int iNgay, iThang, iNam;
public:
	CDate() {};
	CDate(int iNgay, int iThang, int iNam) : iNgay(iNgay), iThang(iThang), iNam(iNam) {};
	bool CheckDate();
	bool KiemTraNamNhuan();
	CDate operator + (int ngay);
	CDate operator - (int ngay);
	CDate& operator ++ ();
	CDate& operator -- ();
	long operator - (CDate D);
	friend istream& operator >> (istream& is, CDate& D);
	friend ostream& operator << (ostream& os, CDate D);
	
};

