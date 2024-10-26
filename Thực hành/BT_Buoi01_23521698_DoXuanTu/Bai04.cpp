// Bai04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct PhanSo {
    int TuSo;
    int MauSo;
};
PhanSo NhapPhanSo();
bool SapXepTang(PhanSo A, PhanSo B);
bool SapXepGiam(PhanSo A, PhanSo B);
PhanSo PhanSoLonNhat(vector<PhanSo> A);
void XuatPhanSo(PhanSo A);

int main()
{
    int n;
    cout << "So luong phan so : ";
    cin >> n;
    vector <PhanSo> DayPhanSo;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ": " << endl;
        DayPhanSo.push_back(NhapPhanSo());
    }
    PhanSo PhanSoMax = PhanSoLonNhat(DayPhanSo);
    cout << "Phan so lon nhat : ";
    XuatPhanSo(PhanSoMax);
    cout << "Day phan so duoc sap xep tang dan : " << endl;
    sort(DayPhanSo.begin(), DayPhanSo.end(),SapXepTang);
    for (int i = 0; i < n; i++) {
        XuatPhanSo(DayPhanSo[i]);
    }
    cout << "Day phan so duoc sap xep giam dan : " << endl;
    sort(DayPhanSo.begin(), DayPhanSo.end(), SapXepGiam);
    for (int i = 0; i < n; i++) {
        XuatPhanSo(DayPhanSo[i]);
    }
    return 0;
}
PhanSo NhapPhanSo() {
    PhanSo A;
    cout << "Nhap tu so : ";
    cin >> A.TuSo;
    cout << "Nhap mau so: ";
    cin >> A.MauSo;
    return A;
}
bool SapXepTang(PhanSo A, PhanSo B) {
    double PS1 = (double)A.TuSo / A.MauSo;
    double PS2 = (double)B.TuSo / B.MauSo;

    return PS1 < PS2;
}
bool SapXepGiam(PhanSo A, PhanSo B) {
    double PS1 = (double)A.TuSo / A.MauSo;
    double PS2 = (double)B.TuSo / B.MauSo;

    return PS1 > PS2;
}
PhanSo PhanSoLonNhat(vector<PhanSo> A) {
    PhanSo Max = A[0];
    for (int i = 1; i < A.size(); i++) {
        if ((double)A[i].TuSo / A[i].MauSo > (double)Max.TuSo / Max.MauSo) {
            Max = A[i];
        }
    }
    return Max;
}
void XuatPhanSo(PhanSo A) {
    if ((A.TuSo > 0 && A.MauSo < 0) || (A.TuSo < 0 && A.MauSo < 0)) {
        cout << (-1) * A.TuSo << "/" << (-1) * A.MauSo << endl;
    }

    else {
        cout << A.TuSo << "/" << A.MauSo << endl;
    }
}
