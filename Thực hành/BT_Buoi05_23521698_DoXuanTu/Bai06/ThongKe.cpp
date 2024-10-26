#include "ThongKe.h"
void ThongKe::Nhap() {
	cout << "Nhap so luong bo: ";
	int n; 
	cin >> n;
	LuongBo.resize(n);
	cout << "Nhap so luong cuu: ";
	cin >> n;
	LuongCuu.resize(n);
	cout << "Nhap so luong de: ";
	cin >> n;
	LuongDe.resize(n);
}


void ThongKe::XuatSoLuongMoiLoai(){
	int SoLuongBo = LuongBo.size();
	for (int i = 0; i < LuongBo.size(); i++) {
		SoLuongBo += LuongBo[i].SoLuongSinh();
	}
	cout << "+ Bo: " << SoLuongBo << endl;
	int SoLuongCuu = LuongCuu.size();
	for (int i = 0; i < LuongCuu.size(); i++) {
		SoLuongCuu += LuongCuu[i].SoLuongSinh();
	}
	cout << "+ Cuu: " << SoLuongCuu << endl;
	int SoLuongDe = LuongDe.size();
	for (int i = 0; i < LuongDe.size(); i++) {
		SoLuongDe += LuongDe[i].SoLuongSinh();
	}
	cout << "+ De: " << SoLuongDe << endl;
}
float ThongKe::TongSoLitSua() {
	float Sua = 0;
	for (int i = 0; i < LuongBo.size(); i++) {
		Sua += LuongBo[i].LuongSua();
	}
	for (int i = 0; i < LuongCuu.size(); i++) {
		Sua += LuongCuu[i].LuongSua();
	}
	for (int i = 0; i < LuongDe.size(); i++) {
		Sua += LuongDe[i].LuongSua();
	}
	return Sua;
}
void ThongKe::GiaSucKeu() {
	cout << "Hom nay chu di vang, bon gia suc doi bat dau keu am i." << endl;
	for (int i = 0; i < LuongBo.size(); i++)
		LuongBo[i].Keu();
	cout << endl;
	for (int i = 0; i < LuongCuu.size(); i++)
		LuongCuu[i].Keu();
	cout << endl;
	for (int i = 0; i < LuongDe.size(); i++)
		LuongDe[i].Keu();
	cout << endl;
}