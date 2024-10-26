#pragma once
#include "cKhachHang.h"
class cKhachHangB :
    public cKhachHang
{
private:
    int SoNamThanThiet;
public:
    cKhachHangB() {};
    cKhachHangB(string Ten, int SL, float DonGia, int SoNam) : cKhachHang(Ten, SL, DonGia), SoNamThanThiet(SoNam) {};
    void Nhap(ifstream& infile);
    float TinhTienPhaiTra();
};