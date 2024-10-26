#include "cNhanVien.h"
void cNhanVien::Nhap() {
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin, NgaySinh);
}
void cNhanVien::Xuat() {
	cout << "Ho ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
}