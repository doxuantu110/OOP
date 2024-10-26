#include "cSinhVien.h"
void cSinhVien::Nhap () {
	cout << "MSSV: ";
	getline(cin, MSSV);
	cout << "Ho Ten: ";
	getline(cin,HoTen);
	cout << "Dia chi: ";
	getline(cin,DiaChi);
	cout << "Tong so tin chi: ";
	cin >> TongSoTin;
	cout << "Diem trung binh: ";
	cin >> DiemTB;
}
void cSinhVien::Xuat () {
	cout << "MSSV: " << MSSV << endl;
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Dia chi: " << DiaChi << endl;
	cout << "Tong so tin chi: " << TongSoTin << endl;
	cout << "Diem trung binh: " << DiemTB << endl;
}