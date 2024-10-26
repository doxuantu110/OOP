// Bai03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cThongKe.h"

int main()
{
    cThongKe Farm;
    Farm.Nhap();
    Farm.Keu();
    system("pause");
    system("cls");
    Farm.XuatSLMoiLoai();
    cout << "- Tong so luong sua thu duoc: " << Farm.TongLitSua();
}
