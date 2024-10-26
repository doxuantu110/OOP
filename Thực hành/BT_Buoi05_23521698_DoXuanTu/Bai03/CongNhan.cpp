#include "CongNhan.h"
void CongNhan::Nhap() {
	Nguoi::Nhap();
	cout << "Nhap ten cong ty: ";
	cin.ignore();
	getline(cin, CongTy);
	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgayLamViec;
	cout << "Nhap luong can ban: ";
	cin >> LuongCanBan;
}
void CongNhan::Xuat() {
	Nguoi::Xuat();
	cout << "Ten cong ty: " << CongTy << endl;
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
	cout << "Luong can ban: " << LuongCanBan << endl;
}