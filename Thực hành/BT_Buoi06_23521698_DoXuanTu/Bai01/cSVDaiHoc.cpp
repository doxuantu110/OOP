#include "cSVDaiHoc.h"
void cSVDaiHoc::Nhap() {
	cSinhVien::Nhap();
	cin.ignore();
	cout << "Nhap ten luan van: ";
	getline(cin, TenLuanVan);
	cout << "Nhap diem luan van: ";
	cin >> DiemLuanVan;
}
void cSVDaiHoc::Xuat() {
	cSinhVien::Xuat();
	cout << "Ten luan van: " << TenLuanVan << endl;
	cout << "Diem luan van: " << DiemLuanVan << endl;
}
int cSVDaiHoc::getLoai() {
	return 2;
}
float cSVDaiHoc::getDiemTB() {
	return DiemTB;
}
bool cSVDaiHoc::XetTotNghiep() {
	return (TongSoTin >= 145 && DiemTB >= 5 && DiemLuanVan >= 5);
}