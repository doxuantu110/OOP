#include "cSVCaoDang.h"
void cSVCaoDang::Nhap() {
	cSinhVien::Nhap();
	cout << "Nhap diem thi tot nghiep: ";
	cin >> DiemThiTN;
}
void cSVCaoDang::Xuat() {
	cSinhVien::Xuat();
	cout << "Diem thi tot nghiep: " << DiemThiTN << endl;
}
int cSVCaoDang::getLoai() {
	return 1;
}
float cSVCaoDang::getDiemTB() {
	return DiemTB;
}
bool cSVCaoDang::XetTotNghiep() {
	return (TongSoTin >= 110 && DiemTB >= 5 && DiemThiTN >= 5);
}