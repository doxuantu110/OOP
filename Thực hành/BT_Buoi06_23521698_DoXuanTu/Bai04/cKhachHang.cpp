#include "cKhachHang.h"
void cKhachHang::Nhap(ifstream& infile) {
	getline(infile, TenKhachHang);
	infile >> SoLuongHang >> DonGiaHang;
}
void cKhachHang::Xuat(ofstream& outfile) {
	outfile << TenKhachHang << " " << TinhTienPhaiTra() << endl;
}