#include "ThoiGian.h"
void ThoiGian::Nhap() {
	cout << "Nhap gio phut giay : ";
	cin >> iGio >> iPhut >> iGiay;
}

void ThoiGian::Xuat() {
	cout << iGio << ":" << iPhut << ":" << iGiay << endl;
}
void ThoiGian::setThoiGian(int iGio, int iPhut, int iGiay) {
	this->iGio = iGio;
	this->iPhut = iPhut;
	this->iGiay = iGiay;
}
void ThoiGian::setGio(int iGio) {
	this->iGio = iGio;
}
void ThoiGian::setPhut(int iPhut) {
	this->iPhut = iPhut;
}
void ThoiGian::setGiay(int iGiay) {
	this->iGiay = iGiay;
}
int ThoiGian::getGio() {
	return iGio;
}
int ThoiGian::getPhut() {
	return iPhut;
}
int ThoiGian::getGiay() {
	return iGiay;
}
void ThoiGian::TangGiay(int s) {
    iGiay += s;
    iPhut += iGiay / 60;
    iGio += iPhut / 60;

    iGiay %= 60;
    iPhut %= 60;
    iGio %= 24;
}

void ThoiGian::TangPhut(int m) {
    iPhut += m;
    iGio += iPhut / 60;

    iPhut %= 60;
    iGio %= 24;
}

void ThoiGian::TangGio(int h) {
    iGio += h;
    iGio %= 24;
}

void ThoiGian::GiamGiay(int s) {
    iGiay -= s;

    while (iGiay < 0) {
        iGiay += 60;
        --iPhut;
    }
    while (iPhut < 0) {
        iPhut += 60;
        --iGio;
    }
    while (iGio < 0) {
        iGio += 24;
    }
}

void ThoiGian::GiamPhut(int m) {
    iPhut -= m;
    while (iPhut < 0) {
        iPhut += 60;
        --iGio;
    }
    while (iGio < 0) {
        iGio += 24;
    }
}

void ThoiGian::GiamGio(int h) {
    iGio -= h;
    while (iGio < 0) {
        iGio += 24;
    }
}
