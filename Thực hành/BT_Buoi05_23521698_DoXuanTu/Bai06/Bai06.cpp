// Bai06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "GiaSuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include "ThongKe.h"
int main() {
    ThongKe TK;
    TK.Nhap();
    TK.GiaSucKeu();
    system("pause");
    system("cls");
    cout << "- So luong gia suc trong nong trai sau khi sinh con la: " << endl;
    TK.XuatSoLuongMoiLoai();
    cout << "- Tong so lit sua: " << TK.TongSoLitSua() << " lit." << endl;
}
