#pragma once
#include "Nguoi.h"
class SinhVien :
    public Nguoi
{
private:
    string MSSV;
    string Nganh;
    float DiemTB;
public:
    SinhVien() {};
    void Nhap();
    void Xuat();
};

