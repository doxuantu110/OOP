#include "cDonThuc.h"
//istream& operator >> (istream& is, cDonThuc& donthuc) {
//	is >> donthuc.fHeSo >> donthuc.iBac;
//}
//ostream& operator << (ostream& os, cDonThuc donthuc) {
//	if (donthuc.fHeSo < 0) {
//		os << donthuc.fHeSo << "x^" << donthuc.iBac << ' ';
//	}
//	else
//		os << "+" << donthuc.fHeSo << "x^" << donthuc.iBac << ' ';
//}
float cDonThuc::getHeSo() const {
	return fHeSo;
}
int cDonThuc::getBac() const {
	return iBac;
}

void cDonThuc::setBac(int iBac) {
	this->iBac = iBac;
}
void cDonThuc::setHeSo(float iHeSo) {
	this->fHeSo = fHeSo;
}

float cDonThuc::TinhGiaTri(float x) const {
	return fHeSo * (pow(x, iBac));
}
cDonThuc cDonThuc::Cong(cDonThuc DT) const {
	cDonThuc Tong;
	if (iBac == DT.iBac) {
		Tong.setHeSo(fHeSo + DT.fHeSo);
		Tong.setBac(iBac);
		return Tong;
	}
}
cDonThuc cDonThuc::Tru(cDonThuc DT) const{
	cDonThuc Hieu;
	if (iBac == DT.iBac) {
		Hieu.setHeSo(fHeSo - DT.fHeSo);
		Hieu.setBac(iBac);
		return Hieu;
	}
	return Hieu;
}