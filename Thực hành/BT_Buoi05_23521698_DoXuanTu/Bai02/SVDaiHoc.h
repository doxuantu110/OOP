#pragma once
#include "cSinhVien.h"
class SVDaiHoc :
    public cSinhVien
{
private:
    string TenLuanVan;
    float DiemLuanVan;
public:
    SVDaiHoc() {};
    void Nhap();
    void Xuat();
    float getDiemTB();
    bool KTDieuKienTN();
};

