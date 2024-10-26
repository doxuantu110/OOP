#include "SVCaoDang.h"
void SVCaoDang::Nhap() {
	cSinhVien::Nhap();
	cout << "Nhap diem thi tot nghiep: ";
	cin >> DiemThiTN;
}
void SVCaoDang::Xuat() {
	cSinhVien::Xuat();
	cout << "Diem thi tot nghiep: " << DiemThiTN << endl;
}
float SVCaoDang::getDiemTB() {
	return DiemTB;
}
bool SVCaoDang::KTDieuKienTN() {
	return (TongSoTin >= 110 && DiemTB >= 5 && DiemThiTN >= 5);
}