#pragma once
#include "cKhachHang.h"
class cKhachHangA :
    public cKhachHang
{
public:
    cKhachHangA() {};
    cKhachHangA(string Ten, int SL, float DonGia) : cKhachHang(Ten, SL, DonGia) {};
    float TinhTienPhaiTra();
};