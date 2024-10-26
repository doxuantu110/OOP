#include "cEmployee.h"
void cEmployee::Nhap() {
	cout << "Nhap ma nhan vien: ";
	cin >> MaNV;
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
	cout << "Nhap tuoi: ";
	cin >> Tuoi;
	cout << "Nhap so dien thoai: ";
	cin >> SDT;
	cout << "Nhap dia chi email: ";
	cin >> Email;
	cout << "Nhap luong can ban: ";
	cin >> LuongCoBan;
}
void cEmployee::Xuat() {
	cout << "Ma nhan vien: " << MaNV << endl;
	cout << "Ho ten: " << HoTen << endl;
	cout << "Tuoi: " << Tuoi << endl;
	cout << "So dien thoai: " << SDT << endl;
	cout << "Email: " << Email << endl;
	cout << "Luong can ban: " << fixed << setprecision(0) << LuongCoBan << endl;

}