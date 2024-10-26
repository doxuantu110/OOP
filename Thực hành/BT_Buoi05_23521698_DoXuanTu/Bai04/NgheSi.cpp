#include "NgheSi.h"
void NgheSi::Nhap() {
	Nguoi::Nhap();
	cin.ignore();
	cout << "Nhap linh vuc: ";
	getline(cin, LinhVuc);
	cout << "Nhap thanh tich: ";
	getline(cin, ThanhTich);
}
void NgheSi::Xuat() {
	Nguoi::Xuat();
	cout << "Linh vuc: " << LinhVuc << endl;
	cout << "Thanh tich: " << ThanhTich << endl;
}
