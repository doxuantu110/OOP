#include "Nguoi.h"
void Nguoi::Nhap() {
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	cin >> NgaySinh;
	cout << "Nhap gioi tinh: ";
	cin >> GioiTinh;
}
void Nguoi::Xuat() {
	cout << "Ho ten: " << HoTen << endl;
	cout << "Sinh ngay: " << NgaySinh << endl;
	cout << "Gioi tinh: " << GioiTinh << endl;

}
