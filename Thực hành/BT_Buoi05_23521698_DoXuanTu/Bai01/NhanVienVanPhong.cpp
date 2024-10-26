#include "NhanVienVanPhong.h"
void NhanVienVanPhong::Nhap() {
	cNhanVien::Nhap();
	cout << "So ngay lam viec: ";
	cin >> SoNgayLamViec;
}
void NhanVienVanPhong::Xuat() {
	cNhanVien::Xuat();
	cout << "So ngay lam viec: " << SoNgayLamViec << endl;
}
int NhanVienVanPhong::TinhLuong() {
	return SoNgayLamViec * LuongNgay;
}