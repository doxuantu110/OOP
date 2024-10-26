#pragma once
#include "CVector.h"
using namespace std;
class CMatrix
{
private:
	vector <vector<float>> vMatrix;
public:
	CMatrix() {};
	int getHang() const;
	int getCot() const;
	float operator()(int row, int col) const;
	friend istream& operator >> (istream& is, CMatrix& M);
	friend ostream& operator << (ostream& os, CMatrix M);
	CMatrix operator + (const CMatrix &A) const;
	CMatrix operator - (const CMatrix &A) const;
	CMatrix operator * (CVector &A) const;
	CMatrix operator * (CMatrix &A) const;
};

