// Bai02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct PhanSo {
    int TuSo;
    int MauSo;
};
void NhapPhanSo(PhanSo& A);
PhanSo PhanSoLonHon(PhanSo A, PhanSo B);
void XuatPhanSo(PhanSo A);

int main()
{
    PhanSo A, B;
    NhapPhanSo(A);
    NhapPhanSo(B);
    PhanSo MaxPhanSo = PhanSoLonHon(A, B);
    cout << "Phan so lon hon la: ";
    XuatPhanSo(MaxPhanSo);
    return 0;
}
void NhapPhanSo(PhanSo& A) {
    cout << "Nhap tu so : ";
    cin >> A.TuSo;
    cout << "Nhap mau so: ";
    cin >> A.MauSo;
}
PhanSo PhanSoLonHon(PhanSo A, PhanSo B) {
    double PS1 = (double)A.TuSo / A.MauSo;
    double PS2 = (double)B.TuSo / B.MauSo;

    if (PS1 > PS2)
        return A;
    else
        return B;
}
void XuatPhanSo(PhanSo A) {
    if ((A.TuSo > 0 && A.MauSo < 0) || (A.TuSo < 0 && A.MauSo < 0)) {
        cout << (-1) * A.TuSo << "/" << (-1) * A.MauSo << endl;
    }

    else {
        cout << A.TuSo << "/" << A.MauSo << endl;
    }
}

