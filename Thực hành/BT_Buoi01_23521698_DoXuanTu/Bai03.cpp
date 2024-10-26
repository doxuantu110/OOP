// Bai03.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
PhanSo CongPhanSo(PhanSo A, PhanSo B);
PhanSo TruPhanSo(PhanSo A, PhanSo B);
PhanSo NhanPhanSo(PhanSo A, PhanSo B);
PhanSo ChiaPhanSo(PhanSo A, PhanSo B);
void XuatPhanSo(PhanSo A);

int main()
{
    PhanSo A, B;
    cout << "Nhap phan so 1 : " << endl;
    NhapPhanSo(A);
    cout << "Nhap phan so 2 : " << endl;
    NhapPhanSo(B);
    cout << "Phep cong hai phan so : ";
    PhanSo Cong = CongPhanSo(A, B);
    XuatPhanSo(Cong);
    cout << "Phep tru hai phan so : ";
    PhanSo Tru = TruPhanSo(A, B);
    XuatPhanSo(Tru);
    cout << "Phep nhan hai phan so : ";
    PhanSo Nhan = NhanPhanSo(A, B);
    XuatPhanSo(Nhan);
    cout << "Phep chia hai phan so : ";
    PhanSo Chia = ChiaPhanSo(A, B);
    XuatPhanSo(Chia);
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
PhanSo CongPhanSo(PhanSo A, PhanSo B) {
    PhanSo Tong;
    Tong.TuSo = A.TuSo * B.MauSo + B.TuSo * A.MauSo;
    Tong.MauSo = A.MauSo * B.MauSo;
    RutGonPhanSo(Tong);
    return Tong;
}
PhanSo TruPhanSo(PhanSo A, PhanSo B) {
    PhanSo Hieu;
    Hieu.TuSo = A.TuSo * B.MauSo - B.TuSo * A.MauSo;
    Hieu.MauSo = A.MauSo * B.MauSo;
    RutGonPhanSo(Hieu);
    return Hieu;
}
PhanSo NhanPhanSo(PhanSo A, PhanSo B) {
    PhanSo Tich;
    Tich.TuSo = A.TuSo * B.TuSo;
    Tich.MauSo = A.MauSo * B.MauSo;
    RutGonPhanSo(Tich);
    return Tich;
}
PhanSo ChiaPhanSo(PhanSo A, PhanSo B) {
    PhanSo Thuong;
    Thuong.TuSo = A.TuSo * B.MauSo;
    Thuong.MauSo = A.MauSo * B.TuSo;
    RutGonPhanSo(Thuong);
    return Thuong;
}

void XuatPhanSo(PhanSo A) {
    if (A.MauSo == 1) {
        cout << A.TuSo;
    }
    else if ((A.TuSo > 0 && A.MauSo < 0) || (A.TuSo < 0 && A.MauSo < 0)) {
        cout << (-1) * A.TuSo << "/" << (-1) * A.MauSo << endl;
    }
    else {
        cout << A.TuSo << "/" << A.MauSo << endl;
    }
}
