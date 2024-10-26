#include "cProgrammer.h"
void cProgrammer::Nhap() {
	cEmployee::Nhap();
	cout << "Nhap so gio lam them: ";
	cin >> SoGioOvertime;
}
void cProgrammer::Xuat() {
	cEmployee::Xuat();
	cout << "So gio overtime: " << SoGioOvertime << endl;
}
float cProgrammer::TinhLuong() {
	return LuongCoBan + SoGioOvertime * 200000;
}
int cProgrammer::getLoai() {
	return 1;
}