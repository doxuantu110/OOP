// Bai01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct PhanSo {
    int TuSo;
    int MauSo;
};
void NhapPhanSo(PhanSo& A);
int gcd(int a, int b);
void RutGonPhanSo(PhanSo& A);
void XuatPhanSo(PhanSo A);

int main()
{
    PhanSo A;
    NhapPhanSo(A);
    XuatPhanSo(A);
    return 0;

}
void NhapPhanSo(PhanSo& A) {
    cout << "Nhap tu so : ";
    cin >> A.TuSo;
    cout << "Nhap mau so: ";
    cin >> A.MauSo;
}
int gcd(int a, int b) {
    while (b) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
void RutGonPhanSo(PhanSo& A) {
    int UCLN = gcd(A.TuSo, A.MauSo);
    A.TuSo /= UCLN;
    A.MauSo /= UCLN;
}
void XuatPhanSo(PhanSo A) {
    RutGonPhanSo(A);
    if (A.MauSo == 1) {
        cout << "Phan so sau khi duoc rut gon : ";
        cout << A.TuSo;
    }
    else if ((A.TuSo > 0 && A.MauSo < 0) || (A.TuSo < 0 && A.MauSo < 0)) {
        cout << "Phan so sau khi duoc rut gon : ";
        cout << (-1) * A.TuSo << "/" << (-1) * A.MauSo << endl;
    }

    else {
        cout << "Phan so sau khi duoc rut gon : ";
        cout << A.TuSo << "/" << A.MauSo << endl;

    }
}

