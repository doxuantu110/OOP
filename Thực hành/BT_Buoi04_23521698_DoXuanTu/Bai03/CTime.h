#pragma once
#include <iostream>
using namespace std;
class CTime
{
private:
	int iGio, iPhut, iGiay;
public:
	CTime() : iGio(0), iPhut(0), iGiay(0) {};
	CTime(int iGio, int iPhut, int iGiay) :iGio(iGio), iPhut(iPhut), iGiay(iGiay) {};
	CTime operator + (int s) const;
	CTime operator - (int s) const;
	CTime& operator ++ ();
	CTime& operator -- ();
	friend istream& operator >> (istream& is, CTime& T);
	friend ostream& operator << (ostream& os, CTime T);
};

