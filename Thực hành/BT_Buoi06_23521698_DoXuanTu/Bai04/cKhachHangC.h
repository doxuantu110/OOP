#pragma once
#include "cKhachHang.h"
class cKhachHangC :
    public cKhachHang
{
public:
    cKhachHangC() {};
    cKhachHangC(string Ten, int SL, float DonGia) : cKhachHang(Ten, SL, DonGia) {};
    float TinhTienPhaiTra();
};