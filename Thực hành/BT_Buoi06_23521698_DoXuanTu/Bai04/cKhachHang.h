#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class cKhachHang
{
protected:
	string TenKhachHang;
	int SoLuongHang;
	float DonGiaHang;
public:
	cKhachHang() {};
	cKhachHang(string Ten, int SL, float DonGia) : TenKhachHang(Ten), SoLuongHang(SL), DonGiaHang(DonGia) {};
	virtual void Nhap(ifstream& infile);
	virtual float TinhTienPhaiTra() = 0;
	virtual void Xuat(ofstream& outfile);
	virtual ~cKhachHang() {};
};