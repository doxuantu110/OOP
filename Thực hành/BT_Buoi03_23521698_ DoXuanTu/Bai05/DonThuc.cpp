#include "DonThuc.h"

float DonThuc::getHeSo() const{
	return fHeSo;
}
float DonThuc::getBac() const{
	return fBac;
}

void DonThuc::setBac(float fBac)  {
	this->fBac = fBac;
}
void DonThuc::setHeSo(float fHeSo) {
	this->fHeSo = fHeSo;
}
void DonThuc::Nhap() {
	cout << "Nhap he so: ";
	cin >> fHeSo;
	cout << "Nhap bac: ";
	cin >> fBac;
}
void DonThuc::Xuat() {
	if (fHeSo < 0) {
		cout << fHeSo << "x^" << fBac << ' ';
	}
	else
		cout << "+" << fHeSo << "x^" << fBac << ' ';
}
float DonThuc::TinhGiaTri(float x) {
	return fHeSo * (pow(x, fBac));
}
DonThuc DonThuc::Cong(DonThuc DT) {
	DonThuc Tong;
	if (fBac == DT.fBac) {
		Tong.fHeSo = fHeSo + DT.fHeSo;
		Tong.fBac = DT.fBac;
		return Tong;
	}
}
DonThuc DonThuc::Tru(DonThuc DT) {
	DonThuc Hieu;
	if (fBac == DT.fBac) {
		Hieu.fBac = DT.fBac;
		Hieu.fHeSo = fHeSo - DT.fHeSo;
	}
	return Hieu;
}