#include "DaGIac.h"


void DaGiac::Nhap() {
	int SoDinh;
	cout << "Nhap so dinh cua Da giac: ";
	cin >> SoDinh;
	double x, y;
	for (int i = 0; i < SoDinh; ++i) {
		cout << "Nhap toa do cho dinh " << i + 1 << " (x y): ";
		cin >> x >> y;
		Dinh.push_back(cDiem(x, y));
	}
}
void DaGiac::Xuat() {
	for (int i = 0; i < Dinh.size(); i++) {
		Dinh[i].Xuat(); cout << " ";
	}
}
void DaGiac::TinhTien(float x, float y) {
	for (int i = 0; i < Dinh.size(); i++) {
		Dinh[i].TinhTien(x, y);
	}
}
void DaGiac::Quay(float GocQuay) {
	for (int i = 0; i < Dinh.size(); i++) {
		Dinh[i].Quay(GocQuay);
	}
}
void DaGiac::PhongTo(float k) {
	for (int i = 0; i < Dinh.size(); i++) {
		Dinh[i].PhongTo(k);
	}
}
void DaGiac::Thunho(float k) {
	for (int i = 0; i < Dinh.size(); i++) {
		Dinh[i].ThuNho(k);
	}
}