#include "Diem.h"
void Diem::setHoanhDo(float fHoanhDo) {
	this->fHoanhDo = fHoanhDo;
}
void Diem::setTungDo(float fTungDo) {
	this->fTungDo = fTungDo;
}
float Diem::getHoanhDo() {
	return fHoanhDo;
}
float Diem::getTungDo() {
	return fTungDo;
}
void Diem::NhapMotDiem() {
	cout << "Nhap hoanh do va tung do cua 1 diem : ";
	cin >> fHoanhDo >> fTungDo;
}
void Diem::XuatMotDiem() {
	cout << "(" << fHoanhDo << ";" << fTungDo << ")" << endl;
}
void Diem::TinhTien(float x, float y) {
	fHoanhDo += x;
	fTungDo += y;
}