#include "DanhSachSV.h"
void DanhSachSV::Nhap() {
	cout << "Nhap so luong sinh vien cao dang: ";
	int n;
	cin >> n;
	DSCaoDang.resize(n);
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhap thong tin sinh vien thu " << i + 1 << " :" << endl;
		DSCaoDang[i].Nhap();
		cout << endl;
	}
	cout << "\nNhap so luong sinh vien dai hoc: ";
	int m;
	cin >> m;
	DSDaiHoc.resize(m);
	for (int i = 0; i < m; i++) {
		cin.ignore();
		cout << "Nhap thong tin sinh vien thu " << i + 1 << " :" << endl;
		DSDaiHoc[i].Nhap();
		cout << endl;
	}
}
void DanhSachSV::Xuat() {
	cout << "________________________________________" << endl;
	cout << "\nDanh sach sinh vien cao dang:" << endl;
	for (int i = 0; i < DSCaoDang.size(); i++) {
		DSCaoDang[i].Xuat();
		cout << endl;
	}
	cout << "________________________________________" << endl;
	cout << "\nDanh sach sinh vien dai hoc:" << endl;
	for (int i = 0; i < DSDaiHoc.size(); i++) {
		DSCaoDang[i].Xuat();
		cout << endl;
	}
	cout << "________________________________________" << endl;
}
void DanhSachSV::XuatDSSVDuDieuKienTN() {
	cout << "\nDanh sach sinh vien du dieu kien tot nghiep: " << endl;
	cout << "He Cao Dang: " << endl;
	int check1 = 0;
	for (int i = 0; i < DSCaoDang.size(); i++) {
		if (DSCaoDang[i].KTDieuKienTN()) 
		{
			check1 = 1;
			DSCaoDang[i].Xuat();
			cout << endl;
		}
	}
	if (check1 == 0) cout << "Khong co." << endl;
	cout << "He Dai Hoc: " << endl;
	int check2 = 0;
	for (int i = 0; i < DSDaiHoc.size(); i++) {
		if (DSDaiHoc[i].KTDieuKienTN()) {
			check2 = 1;
			DSDaiHoc[i].Xuat();
			cout << endl;
		}
	}
	if (check2 == 0) cout << "Khong co." << endl;
}
void DanhSachSV::XuatDSSVKhongDuDieuKienTN() {
	cout << "\nDanh sach sinh vien khong du dieu kien tot nghiep: " << endl;
	cout << "He Cao Dang: " << endl;
	int check1 = 0;
	for (int i = 0; i < DSCaoDang.size(); i++) {
		if (!DSCaoDang[i].KTDieuKienTN()) {
			check1 = 1;
			DSCaoDang[i].Xuat();
			cout << endl;
		}
	}
	if (check1 == 0) cout << "Khong co." << endl;
	cout << "He Dai Hoc: " << endl;
	int check2 = 0;
	for (int i = 0; i < DSDaiHoc.size(); i++) {
		if (!DSDaiHoc[i].KTDieuKienTN()) {
			check2 = 1;
			DSDaiHoc[i].Xuat();
			cout << endl;
		}
	}
	if (check2 == 0) cout << "Khong co." << endl;
}
SVDaiHoc DanhSachSV::SVCoDiemTBMax() {
	SVDaiHoc MaxDiemTB = DSDaiHoc[0];
	for (int i = 1; i < DSDaiHoc.size(); i++) {
		if (MaxDiemTB.getDiemTB() < DSDaiHoc[i].getDiemTB())
			MaxDiemTB = DSDaiHoc[i];
	}
	return MaxDiemTB;
}