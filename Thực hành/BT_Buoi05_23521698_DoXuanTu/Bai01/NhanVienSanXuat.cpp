#include "NhanVienSanXuat.h"
void NhanVienSanXuat::Nhap() {
	cNhanVien::Nhap();
	cout << "Nhap luong can ban: ";
	cin >> LuongCanBan;
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
}
void NhanVienSanXuat::Xuat() {
	cNhanVien::Xuat();
	cout << "Luong can ban: " << LuongCanBan << endl;
	cout << "So san pham: " << SoSanPham << endl;
}
int NhanVienSanXuat::TinhLuong() {
	return LuongCanBan * SoSanPham * DonGia;
}