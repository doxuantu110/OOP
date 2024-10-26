#pragma once
#include "Nguoi.h"
class HocSinh :
    public Nguoi
{
private:
    string Lop;
    float DiemTB;
public:
    HocSinh() {};
    void Nhap();
    void Xuat();
};

