#include "SVDaiHoc.h"
void SVDaiHoc::Nhap() {
	cSinhVien::Nhap();
	cin.ignore();
	cout << "Nhap ten luan van: ";
	getline(cin, TenLuanVan);
	cout << "Nhap diem luan van: ";
	cin >> DiemLuanVan;
}
void SVDaiHoc::Xuat() {
	cSinhVien::Xuat();
	cout << "Ten luan van: " << TenLuanVan << endl;
	cout << "Diem luan van: " << DiemLuanVan << endl;
}
float SVDaiHoc::getDiemTB() {
	return DiemTB;
}
bool SVDaiHoc::KTDieuKienTN() {
	return (TongSoTin >= 145 && DiemTB >= 5 && DiemLuanVan >= 5);
}