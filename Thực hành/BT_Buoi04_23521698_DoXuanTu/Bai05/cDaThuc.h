#pragma once
#include <iostream>
#include <vector>
using namespace std;
class cDaThuc
{
private:
	int iBac;
	vector <float> vHeSo;
public:
	cDaThuc(int n = 0) : iBac(n) {
		vHeSo.resize(n + 1, 0);
	}
	friend istream& operator >> (istream& is, cDaThuc& DT);
	friend ostream& operator << (ostream& os, cDaThuc DT);
	float operator () (float x) const;
	cDaThuc operator + (cDaThuc A) const;
	cDaThuc operator - (cDaThuc A) const;
};

