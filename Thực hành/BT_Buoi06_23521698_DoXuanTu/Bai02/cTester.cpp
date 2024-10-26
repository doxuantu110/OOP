#include "cTester.h"
void cTester::Nhap() {
	cEmployee::Nhap();
	cout << "Nhap so loi phat hien duoc: ";
	cin >> SoLoiPhatHien;
}
void cTester::Xuat() {
	cEmployee::Xuat();
	cout << "So loi phat hien duoc: " << SoLoiPhatHien << endl;
}
float cTester::TinhLuong() {
	return LuongCoBan + SoLoiPhatHien * 50000;
}
int cTester::getLoai() {
	return 2;
}