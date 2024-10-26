#pragma once
#include "cEmployee.h"
class cProgrammer :
    public cEmployee
{
private:
    float SoGioOvertime;
public:
    cProgrammer() {};
    void Nhap();
    void Xuat();
    float TinhLuong();
    int getLoai();
};

