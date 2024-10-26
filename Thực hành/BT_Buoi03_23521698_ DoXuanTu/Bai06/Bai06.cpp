// Bai06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ListCandidate.h"

int main()
{
    ListCandidate DSThiSinh;
    DSThiSinh.Nhap();
    DSThiSinh.XuatThiSinhDat();
    cout << "Thi sinh co tong diem cao nhat: " << endl;
    Candidate ThiSinhCaoDiemNhat = DSThiSinh.TimThiSinhDiemMax();
    ThiSinhCaoDiemNhat.Xuat();
    cout << endl;
    DSThiSinh.SapXepTheoDiemGiamDan();
    cout << "Danh sach thi sinh sap xep theo diem giam dan : " << endl;
    DSThiSinh.Xuat();
}
