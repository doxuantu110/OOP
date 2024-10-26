// Bai05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct HocSinh {
    string HoTen;
    float DiemToan;
    float DiemVan;
};
void NhapDuLieu(HocSinh& A);
float DiemTrungBinh(HocSinh A);
void XuatDuLieu(HocSinh A);

int main()
{
    HocSinh A;
    NhapDuLieu(A);
    XuatDuLieu(A);
}
void NhapDuLieu(HocSinh& A) {
    cout << "Nhap ho ten: ";
    getline(cin, A.HoTen);
    cout << "Diem Toan : ";
    cin >> A.DiemToan;
    cout << "Diem Van : ";
    cin >> A.DiemVan;
}
float DiemTrungBinh(HocSinh A) {
    return (A.DiemToan + A.DiemVan) / 2;
}
void XuatDuLieu(HocSinh A) {
    cout << "Ho ten hoc sinh : " << A.HoTen << endl;
    cout << "Diem Toan : " << A.DiemToan << endl;
    cout << "Diem Van : " << A.DiemVan << endl;
    cout << "Diem Trung Binh : " << DiemTrungBinh(A) << endl;
}