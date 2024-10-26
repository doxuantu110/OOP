#pragma once
#include <iostream>
using namespace std;
class cPhanSo
{
private:
	int iTuSo;
	int iMauSo;
public:
	cPhanSo() {};
	cPhanSo(int iTu, int iMau ) :iTuSo(iTu), iMauSo(iMau) {};
	cPhanSo(int a): iTuSo(a), iMauSo(1) {};
	void ToiGian(cPhanSo &A);
	cPhanSo operator +(cPhanSo A) const;
	cPhanSo operator - (cPhanSo A) const;
	cPhanSo operator *(cPhanSo A) const;
	cPhanSo operator / (cPhanSo A) const;
	bool operator == (cPhanSo A) const;
	bool operator < (cPhanSo A) const;
	bool operator > (cPhanSo A) const;
	friend istream& operator >> (istream& is, cPhanSo& A);
	friend ostream& operator << (ostream& os, cPhanSo A);
};

