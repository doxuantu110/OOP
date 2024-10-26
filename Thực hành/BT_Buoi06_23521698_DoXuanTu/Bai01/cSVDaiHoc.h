#pragma once
#include "cSinhVien.h"
class cSVDaiHoc :
    public cSinhVien
{
private:
    string TenLuanVan;
    float DiemLuanVan;
public:
    cSVDaiHoc() {};
    void Nhap();
    void Xuat();
    float getDiemTB();
    bool XetTotNghiep();
    int getLoai();
};

