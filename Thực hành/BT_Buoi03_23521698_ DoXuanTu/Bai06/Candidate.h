#pragma once
#include <iostream>
#include <string>
using namespace std;
class Candidate
{
private:
	string Ma;
	string Ten;
	string NgayThangNamSinh;
	float DiemToan;
	float DiemVan;
	float DiemAnh;
public:
	Candidate() {};
	Candidate(string Ma, string Ten, string NgayThangNam, float DiemToan, float DiemVan, float DiemAnh) :Ma(Ma),Ten(Ten), NgayThangNamSinh(NgayThangNam),
	DiemToan(DiemToan),DiemAnh(DiemAnh),DiemVan(DiemVan) {};
	string getMa();
	string getTen();
	string getNgayThangNamSinh();
	float TinhTongDiem();
	void Nhap();
	void Xuat();

};

