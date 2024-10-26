#include "cPhanSo.h"
istream& operator >> (istream& is, cPhanSo& A) {
	is >> A.iTuSo >> A.iMauSo;
	while (!A.iMauSo) {
		cout << "Nhap lai mau so : ";
		is >> A.iMauSo;
	}
	return is;
}
ostream& operator << (ostream& os, cPhanSo A) {

    if (A.iTuSo == 0) {
        os << "0";
    }
    else if (A.iTuSo > 0 && A.iMauSo < 0)
    {
        cout << -A.iTuSo << "/" << -A.iMauSo;
    }
    else
    {
        cout << A.iTuSo << "/" << A.iMauSo;
    }
    return os;
}
int GCD(int a, int b) {
    while (b) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
void cPhanSo::ToiGian(cPhanSo& A) {
    int UCLN = GCD(A.iTuSo, A.iMauSo);
    A.iTuSo /= UCLN;
    A.iMauSo /= UCLN;
}
cPhanSo cPhanSo::operator + (cPhanSo A) const {
    cPhanSo Tong;
    Tong.iTuSo = iTuSo * A.iMauSo + A.iTuSo * iMauSo;
    Tong.iMauSo = iMauSo * A.iMauSo;
    Tong.ToiGian(Tong);
    return Tong;
}
cPhanSo cPhanSo::operator - (cPhanSo A) const {
    cPhanSo Hieu;
    Hieu.iTuSo = iTuSo * A.iMauSo - A.iTuSo * iMauSo;
    Hieu.iMauSo = iMauSo * A.iMauSo;
    Hieu.ToiGian(Hieu);
    return Hieu;
}
cPhanSo cPhanSo::operator* (cPhanSo A) const {
    cPhanSo Tich;
    Tich.iTuSo = iTuSo * A.iTuSo;
    Tich.iMauSo = iMauSo * A.iMauSo;
    Tich.ToiGian(Tich);
    return Tich;
}
cPhanSo cPhanSo::operator / (cPhanSo A) const {
    cPhanSo Thuong;
    Thuong.iTuSo = iTuSo * A.iMauSo;
    Thuong.iMauSo = iMauSo * A.iTuSo;
    Thuong.ToiGian(Thuong);
    return Thuong;
}

bool cPhanSo::operator == (cPhanSo A) const {
    return (iTuSo * A.iMauSo == iMauSo * A.iTuSo);
}
bool cPhanSo::operator < (cPhanSo A) const {
    return ((float)iTuSo / iMauSo < (float)iTuSo / iMauSo);
}
bool cPhanSo::operator > (cPhanSo A) const {
    return ((float)iTuSo / iMauSo > (float)iTuSo / iMauSo);
}
