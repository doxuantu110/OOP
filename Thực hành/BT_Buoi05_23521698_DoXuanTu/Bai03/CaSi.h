#pragma once
#include "Nguoi.h"
class CaSi :
    public Nguoi
{
private:
    string TheLoai;
    string MVMoiNhat;
public:
    CaSi() {};
    void Nhap();
    void Xuat();
};

