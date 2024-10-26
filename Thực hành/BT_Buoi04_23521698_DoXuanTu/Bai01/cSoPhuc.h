#pragma once
#include <iostream>
using namespace std;
class cSoPhuc
{
private:
	float fThuc;
	float fAo;
public:
	cSoPhuc() {};
	cSoPhuc(float fThuc, float fAo = 0) : fThuc(fThuc), fAo(fAo) {};
	cSoPhuc operator + (cSoPhuc A) const;
	cSoPhuc operator - (cSoPhuc A) const;
	cSoPhuc operator * (cSoPhuc A) const;
	cSoPhuc operator / (cSoPhuc A) const;
	bool operator == (cSoPhuc A) const;
	bool operator != (cSoPhuc A) const;
	friend istream& operator >> (istream& is, cSoPhuc& A);
	friend ostream& operator << (ostream& os, cSoPhuc A);
};


