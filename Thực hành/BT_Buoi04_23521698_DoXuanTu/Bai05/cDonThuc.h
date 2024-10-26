#pragma once
#include <iostream>
using namespace std;
class cDonThuc
{
private:
	float fHeSo;
	int iBac;
public:
	cDonThuc() {};
	cDonThuc(float fHeSo, int iBac) : fHeSo(fHeSo), iBac(iBac) {};
	friend istream& operator >> (istream &is, cDonThuc &DonThuc);
	friend ostream& operator << (ostream& os, cDonThuc DonThuc);
	float getHeSo() const;
	int getBac() const;
	void setBac(int);
	void setHeSo(float);
	float TinhGiaTri(float x) const;
	cDonThuc Cong(cDonThuc) const;
	cDonThuc Tru(cDonThuc) const;
};

