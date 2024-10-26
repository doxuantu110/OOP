#include "SinhVien.h"
void SinhVien::Nhap() {
    Nguoi::Nhap();
    cout << "Nhap MSSV: ";
    cin >> MSSV;
    cout << "Nhap nganh: ";
    cin.ignore();
    getline(cin, Nganh);
    cout << "Nhap diem trung binh: ";
    cin >> DiemTB;
}
void SinhVien::Xuat() {
    Nguoi::Xuat();
    cout << "MSSV: " << MSSV << endl;
    cout << "Diem trung binh: " << DiemTB << endl;

}