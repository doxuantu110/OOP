#include "DSDoiTuong.h"
void DSDoiTuong::Nhap() {
	int n;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	DSSinhVien.resize(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
		DSSinhVien[i].Nhap();
	}
	cout << "\nNhap so luong hoc sinh: ";
	cin >> n;
	DSHocSinh.resize(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap thong tin hoc sinh thu " << i + 1 << ":" << endl;
		DSHocSinh[i].Nhap();
	}
	cout << "\nNhap so luong cong nhan: ";
	cin >> n;
	DSCongNhan.resize(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap thong tin cong nhan thu " << i + 1 << ":" << endl;
		DSCongNhan[i].Nhap();
	}
	cout << "\nNhap so luong nghe si: ";
	cin >> n;
	DSNgheSi.resize(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap thong tin nghe si thu " << i + 1 << ":" << endl;
		DSNgheSi[i].Nhap();
	}
	cout << "\nNhap so luong ca si: ";
	cin >> n;
	DSCaSi.resize(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap thong tin ca si thu " << i + 1 << ":" << endl;
		DSCaSi[i].Nhap();
	}

}
void DSDoiTuong::Xuat() {
	cout << "__________________________________________" << endl;
	cout << "\nDanh sach sinh vien: " << endl;
	for (int i = 0; i < DSSinhVien.size(); i++) {
		DSSinhVien[i].Xuat();
		cout << endl;
	}
	cout << "__________________________________________" << endl;
	cout << "\nDanh sach hoc sinh: " << endl;
	for (int i = 0; i < DSHocSinh.size(); i++) {
		DSHocSinh[i].Xuat();
		cout << endl;
	}
	cout << "__________________________________________" << endl;
	cout << "\nDanh sach cong nhan: " << endl;
	for (int i = 0; i < DSCongNhan.size(); i++) {
		DSCongNhan[i].Xuat();
		cout << endl;
	}
	cout << "__________________________________________" << endl;
	cout << "\nDanh sach nghe si: " << endl;
	for (int i = 0; i < DSNgheSi.size(); i++) {
		DSNgheSi[i].Xuat();
		cout << endl;
	}
	cout << "__________________________________________" << endl;
	cout << "\nDanh sach ca si: " << endl;
	for (int i = 0; i < DSCaSi.size(); i++) {
		DSCaSi[i].Xuat();
		cout << endl;
	}
}