#pragma once
#include "cSinhVien.h"
class SVCaoDang :
    public cSinhVien
{
private:
    float DiemThiTN;
public:
    SVCaoDang() {};
    void Nhap();
    void Xuat();
    bool KTDieuKienTN();
    float getDiemTB();
};

