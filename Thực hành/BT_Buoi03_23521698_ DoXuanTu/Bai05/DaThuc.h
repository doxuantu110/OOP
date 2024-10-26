#pragma once
#include "DonThuc.h"
#include <vector>
using namespace std;
class DaThuc
{
private:
	vector<DonThuc> vDaThuc;
	static int n;
public:
	/*DaThuc() {};
	DaThuc(const vector<DonThuc>& v) : vDaThuc(v) {};*/
	void NhapDaThuc();
	void XuatDaThuc();
	void setDaThuc(vector <DonThuc>);
	float TinhGiaTriDaThuc(float x);
	DaThuc Cong(DaThuc);
	DaThuc Tru(DaThuc);
};

