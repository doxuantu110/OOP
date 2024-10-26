#include "cEmployeesList.h"
void cEmployeesList::Nhap() {
	cout << "Nhap so luong nhan vien can quan li: ";
	int sl, sel;
	cin >> sl;
	DSNV.resize(sl);
	for (int i = 0; i < sl; i++) {
		cout << "Can quan li nhan vien (chon 1 hoac 2): " << endl;
		cout << "1.Lap trinh vien. " << endl;
		cout << "2.Kiem chung vien." << endl;
		cout << "Lua chon: "; 
		cin >> sel;
		cin.ignore();
		if (sel == 1) {
			DSNV[i] = new cProgrammer;
			DSNV[i]->Nhap();
		}
		else {
			DSNV[i] = new cTester;
			DSNV[i]->Nhap();
		}
	}
}
void cEmployeesList::Xuat() {
	cout << "\n________________________________________" << endl;
	cout << "Danh sach nhan vien: " << endl;
	for (int i = 0; i < DSNV.size(); i++) {
		DSNV[i]->Xuat();
	}
	cout << "\n________________________________________" << endl;
}
float cEmployeesList::TinhLuongTB() {
	float sum = 0;
	for (int i = 0; i < DSNV.size(); i++) {
		sum += DSNV[i]->TinhLuong();
	}
	return sum / DSNV.size();
}
void cEmployeesList::XuatDSNV_coLuongThap() {
	cout << "\nDanh sach nhan vien co muc luong thap hon trung binh: " << endl;
	for (int i = 0; i < DSNV.size(); i++) {
		if (DSNV[i]->TinhLuong() < TinhLuongTB())
			DSNV[i]->Xuat();
	}
	cout << "\n________________________________________" << endl;
}
cEmployee* cEmployeesList::NV_coLuongCaoNhat() {
	cEmployee* NV = DSNV[0];
	for (int i = 1; i < DSNV.size(); i++) {
		if (NV->TinhLuong() < DSNV[i]->TinhLuong()) {
			NV = DSNV[i];
		}
	}
	return NV;
}
cEmployee* cEmployeesList::NV_coLuongThapNhat() {
	cEmployee* NV = DSNV[0];
	for (int i = 1; i < DSNV.size(); i++) {
		if (NV->TinhLuong() > DSNV[i]->TinhLuong()) {
			NV = DSNV[i];
		}
	}
	return NV;
}
cEmployee* cEmployeesList::Programmer_coLuongCaoNhat() {
	cEmployee* Pro = new cProgrammer;
	int index = 0;
	for (int i = 0; i < DSNV.size(); i++) {
		if (DSNV[i]->getLoai() == 1) {
			Pro = DSNV[i];
			index = i;
			break;
		}
	}
	for (int i = index; i < DSNV.size(); i++) {
		if (DSNV[i]->getLoai() == 1 && Pro->TinhLuong() < DSNV[i]->TinhLuong()) {
			Pro = DSNV[i];
		}
	}
	return Pro;
}
cEmployee* cEmployeesList::Tester_coLuongThapNhat() {
	cEmployee* Test = new cTester;
	int index = 0;
	for (int i = 0; i < DSNV.size(); i++) {
		if (DSNV[i]->getLoai() == 2) {
			Test = DSNV[i];
			index = i;
			break;
		}
	}
	for (int i = index; i < DSNV.size(); i++) {
		if (DSNV[i]->getLoai() == 2 && Test->TinhLuong() > DSNV[i]->TinhLuong()) {
			Test = DSNV[i];
		}
	}
	return Test;
}
