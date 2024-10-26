#pragma once
#include "Nguoi.h"
class NgheSi :
    public Nguoi
{
private:
    string LinhVuc;
    string ThanhTich;
public:
    NgheSi() {};
    void Nhap();
    void Xuat();
};

