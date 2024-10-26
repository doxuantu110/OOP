#pragma once
#include <iostream>
#include <vector>
using namespace std;
class CVector
{
private:
	vector <float> vVector;
public:
	CVector() {};
	int getSoChieu() const;
	vector <float> getVector() const;
	float& operator[] (int index);
	friend istream& operator >> (istream& is, CVector& V);
	friend ostream& operator << (ostream& os, CVector V);
	CVector operator + (CVector &A) const;
	CVector operator - (CVector &A) const;
	float operator * (CVector); // Tich vo huong
	float operator || (CVector &V);
};

