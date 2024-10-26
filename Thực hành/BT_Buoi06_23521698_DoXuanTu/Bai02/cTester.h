#pragma once
#include "cEmployee.h"
class cTester :
    public cEmployee
{
private:
    int SoLoiPhatHien;
public:
    cTester() {};
    void Nhap();
    void Xuat();
    float TinhLuong();
    int getLoai();
};

