// Bai06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct HocSinh {
    string HoTen;
    float DiemToan;
    float DiemVan;
};
HocSinh NhapDuLieu();
float DiemTrungBinh(HocSinh A);
void XuatDuLieu(HocSinh A);
HocSinh DiemTrungBinhCaoNhat(vector<HocSinh> A);
HocSinh DiemTrungBinhThapNhat(vector<HocSinh> A);

int main()
{
    int n;
    cout << "So luong hoc sinh : ";
    cin >> n;
    cin.ignore();
    vector <HocSinh> DanhSachHocSinh;
    for (int i = 0; i < n; i++) {
        cout << "Nhap hoc sinh thu " << i + 1 << " :" << endl;
        DanhSachHocSinh.push_back(NhapDuLieu());
    }
    cout << "Hoc sinh co diem trung binh cao nhat : " << endl;
    HocSinh DiemTBMax = DiemTrungBinhCaoNhat(DanhSachHocSinh);
    XuatDuLieu(DiemTBMax);
    cout << "Hoc sinh co diem trung binh thap nhat : " << endl;
    HocSinh DiemTBMin = DiemTrungBinhThapNhat(DanhSachHocSinh);
    XuatDuLieu(DiemTBMin);
    return 0;
}

HocSinh NhapDuLieu() {
    HocSinh A;
    cout << "Nhap ho ten: ";
    getline(cin, A.HoTen);
    cout << "Diem Toan : ";
    cin >> A.DiemToan;
    cout << "Diem Van : ";
    cin >> A.DiemVan;
    cin.ignore();
    return A;
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
HocSinh DiemTrungBinhCaoNhat(vector<HocSinh> A) {
    HocSinh DiemTrungBinhMax = A[0];
    for (int i = 1; i < A.size(); i++) {
        if (DiemTrungBinh(A[i]) > DiemTrungBinh(DiemTrungBinhMax)) {
            DiemTrungBinhMax = A[i];
        }
    }
    return DiemTrungBinhMax;
}
HocSinh DiemTrungBinhThapNhat(vector<HocSinh> A) {
    HocSinh DiemTrungBinhMin = A[0];
    for (int i = 1; i < A.size(); i++) {
        if (DiemTrungBinh(A[i]) < DiemTrungBinh(DiemTrungBinhMin)) {
            DiemTrungBinhMin = A[i];
        }
    }
    return DiemTrungBinhMin;
}

