#include "HocSinh.h"
void HocSinh::Nhap() {
	Nguoi::Nhap();
	cout << "Nhap lop: ";
	cin >> Lop;
	cout << "Nhap diem trung binh: ";
	cin >> DiemTB;

}
void HocSinh::Xuat() {
	Nguoi::Xuat();
	cout << "Lop: " << Lop << endl;
	cout << "Diem trung binh: " << DiemTB << endl;

}