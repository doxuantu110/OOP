#pragma once
#include "Candidate.h"
#include <vector>
#include <algorithm>
using namespace std;
class ListCandidate
{
private:
	vector<Candidate> ThiSinh;
public:
	ListCandidate() {};
	void Nhap();
	void Xuat();
	void XuatThiSinhDat();
	Candidate TimThiSinhDiemMax();
	void SapXepTheoDiemGiamDan();
};

