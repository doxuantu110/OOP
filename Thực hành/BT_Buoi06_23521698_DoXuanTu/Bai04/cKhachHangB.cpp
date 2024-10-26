#include "cKhachHangB.h"
void cKhachHangB::Nhap(ifstream& infile) {
	cKhachHang::Nhap(infile);
	infile >> SoNamThanThiet;
	infile.ignore();
}
float cKhachHangB::TinhTienPhaiTra() {
	float PhanTramKhuyenMai = max(SoNamThanThiet * 0.05, 0.5);
	return ((SoLuongHang * DonGiaHang) * (1 - PhanTramKhuyenMai)) * 1.1;
}