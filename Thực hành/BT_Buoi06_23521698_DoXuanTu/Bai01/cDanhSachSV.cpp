#include "cDanhSachSV.h"
void cDanhSachSV::Nhap() {
	cout << "Nhap so luong sinh vien can quan ly: ";
	int n;
	cin >> n;
	DS.resize(n);
	for (int i = 0; i < n; i++) {
		int select;
		cout << "Sinh vien can quan ly la: " << "\n" << "1.Sinh vien Cao dang. " << "\n" << "2.Sinh vien Dai hoc." << endl;
		cin >> select;
		cin.ignore();
		if (select == 1) {
			DS[i] = new cSVCaoDang;
			DS[i]->Nhap();
		}
		else {
			DS[i] = new cSVDaiHoc;
			DS[i]->Nhap();
		}

	}
	cout << endl;
}
void cDanhSachSV::Xuat() {
	cout << "________________________________________" << endl;
	cout << "\nDanh sach sinh vien cao dang:" << endl;
	for (int i = 0; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 1)
			DS[i]->Xuat();
	}
	cout << "________________________________________" << endl;
	cout << "\nDanh sach sinh vien dai hoc:" << endl;
	for (int i = 0; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 2)
			DS[i]->Xuat();
	}
	cout << "________________________________________" << endl;
}
void cDanhSachSV::XuatDSSVDuDieuKienTN() {
	cout << "\nDanh sach sinh vien du dieu kien tot nghiep: " << endl;
	cout << "He Cao Dang: " << endl;
	bool check1 = false;
	for (int i = 0; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 1 && DS[i]->XetTotNghiep())
		{
			check1 = true;
			DS[i]->Xuat();
			cout << endl;
		}
	}
	if (check1 == false) cout << "Khong co." << endl;
	cout << "He Dai Hoc: " << endl;
	bool check2 = false;
	for (int i = 0; i <	DS.size(); i++) {
		if (DS[i]->getLoai() == 2 && DS[i]->XetTotNghiep()) {
			check2 = true;
			DS[i]->Xuat();
			cout << endl;
		}
	}
	if (check2 == false) cout << "Khong co." << endl;
	cout << "________________________________________" << endl;
}
int cDanhSachSV::SoSVCDKhongDuDKTN = 0;
int cDanhSachSV::SoSVDHKhongDuDKTN = 0;
void cDanhSachSV::XuatDSSVKhongDuDieuKienTN() {
	cout << "\nDanh sach sinh vien khong du dieu kien tot nghiep: " << endl;
	cout << "He Cao Dang: " << endl;
	bool check1 = false;
	for (int i = 0; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 1 && !DS[i]->XetTotNghiep()) {
			check1 = true;
			DS[i]->Xuat();
			SoSVCDKhongDuDKTN++;
			cout << endl;
		}
	}
	if (check1 == false) cout << "Khong co." << endl;
	cout << "He Dai Hoc: " << endl;
	bool check2 = false;
	for (int i = 0; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 2 && !DS[i]->XetTotNghiep()) {
			check2 = true;
			DS[i]->Xuat();
			SoSVDHKhongDuDKTN++;
			cout << endl;
		}
	}
	if (check2 == false) cout << "Khong co." << endl;
	cout << "________________________________________" << endl;
}
cSinhVien* cDanhSachSV::SVDHCoDiemTBMax() {
	cSinhVien* MaxDiemTB = new cSVDaiHoc;
	int index = 0;
	for (int i = 0; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 2) {
			MaxDiemTB =	DS[i]; 
			index = i;
			break;
		}
	}
	for (int i = index; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 2 && MaxDiemTB->getDiemTB() < DS[i]->getDiemTB())
			MaxDiemTB = DS[i];
	}
	return MaxDiemTB;
}
cSinhVien* cDanhSachSV::SVCDCoDiemTBMax() {
	cSinhVien* MaxDiemTB = new cSVCaoDang;
	int index = 0;
	for (int i = 0; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 1) {
			MaxDiemTB = DS[i];
			index = i;
			break;
		}
	}
	for (int i = index; i < DS.size(); i++) {
		if (DS[i]->getLoai() == 1 && MaxDiemTB->getDiemTB() < DS[i]->getDiemTB())
			MaxDiemTB = DS[i];
	}
	return MaxDiemTB;
}
