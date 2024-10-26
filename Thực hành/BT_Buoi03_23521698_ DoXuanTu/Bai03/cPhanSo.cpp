#include "cPhanSo.h"
void cPhanSo::Nhap() {
	cout << "Nhap tu va mau so: ";
	cin >> iTuSo >> iMauSo;
}
void cPhanSo::Xuat() {
	cout << iTuSo << "/" << iMauSo << endl;
}
int GCD(int a, int b) {
	while (b) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
double cPhanSo::getValue() {
	return (double)iTuSo / iMauSo;
}
void cPhanSo::ToiGianPhanSo(cPhanSo& PhanSo)
{
	int UocChungLonNhat = GCD(PhanSo.iTuSo, PhanSo.iMauSo);
	PhanSo.iTuSo /= UocChungLonNhat;
	PhanSo.iMauSo /= UocChungLonNhat;
}