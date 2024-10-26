#include "cSoPhuc.h"
istream& operator >> (istream& is, cSoPhuc& A) {
	cout << "Nhap phan thuc : ";
	is >> A.fThuc;
	cout << "Nhap phan ao : ";
	is >> A.fAo;
	return is;
}
ostream& operator << (ostream& os, cSoPhuc A) {
	if (A.fAo < 0)
		os << A.fThuc << " " << A.fAo << "i" << endl;
	else
		os << A.fThuc << " + " << A.fAo << "i" << endl;
	return os;
}
cSoPhuc cSoPhuc::operator + (cSoPhuc A) const {
	return cSoPhuc(fThuc + A.fThuc, fAo + A.fAo);
}
cSoPhuc cSoPhuc::operator - (cSoPhuc A) const {
	return cSoPhuc(fThuc - A.fThuc, fAo - A.fAo);
}
cSoPhuc cSoPhuc::operator * (cSoPhuc A) const {
	return cSoPhuc(fThuc * A.fThuc - fAo * A.fAo, fThuc * A.fAo + fAo * A.fThuc);
}
cSoPhuc cSoPhuc:: operator / (cSoPhuc A) const {
	float fMau = fThuc * A.fThuc + fAo * A.fAo;
	return cSoPhuc((fThuc * A.fThuc + fAo * A.fAo) / fMau, (fAo * A.fAo - fThuc * A.fThuc) / fMau);
}
bool cSoPhuc:: operator == (cSoPhuc A) const {
	return (fThuc == A.fThuc && fAo == A.fAo);
}
bool cSoPhuc:: operator != (cSoPhuc A) const {
	return (fThuc != A.fThuc || fAo != A.fAo);
}
