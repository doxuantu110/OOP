#include "DanhSachNhanVien.h"
void DanhSachNhanVien::Nhap() {
	cout << "Nhap so luong nhan vien van phong: " ;
	int n;
	cin >> n;
	DSVanPhong.resize(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap thong tin nhan vien thu " << i + 1  << endl;
		DSVanPhong[i].Nhap();
	}
	cout << "Nhap so luong nhan vien san xuat: " ;
	int m;
	cin >> m;
	DSSanXuat.resize(m);
	for (int i = 0; i < m; i++) {
		cin.ignore();
		cout << "Nhap thong tin nhan vien thu " << i + 1 << endl;
		DSSanXuat[i].Nhap();
	}
}
void DanhSachNhanVien::Xuat() {
	cout << "__________________________________________" << endl;
	cout << "\nDanh sach nhan vien van phong: " << endl;
	for (int i = 0; i < DSVanPhong.size(); i++) {
		DSVanPhong[i].Xuat();
		cout << "Luong: " << DSVanPhong[i].TinhLuong() << endl;
		cout << endl;
	}
	cout << "\nDanh sach nhan vien san xuat: " << endl;
	for (int i = 0; i < DSSanXuat.size(); i++) {
		DSSanXuat[i].Xuat();
		cout << "Luong: " << DSSanXuat[i].TinhLuong() << endl;
		cout << endl;
	}
	cout << "__________________________________________" << endl;
}
long long DanhSachNhanVien::TinhTongLuong() {
	long long TongLuong = 0;
	for (int i = 0; i < DSVanPhong.size(); i++) {
		TongLuong+=DSVanPhong[i].TinhLuong();
	}
	for (int i = 0; i < DSSanXuat.size(); i++) {
		TongLuong+=DSSanXuat[i].TinhLuong();
	}
	return TongLuong;
}