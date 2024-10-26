#pragma once
#include "cSinhVien.h"
class cSVCaoDang :
    public cSinhVien
{
private:
    float DiemThiTN;
public:
    cSVCaoDang() {};
    void Nhap();
    void Xuat();
    bool XetTotNghiep();
    float getDiemTB();
    int getLoai(); 
};

