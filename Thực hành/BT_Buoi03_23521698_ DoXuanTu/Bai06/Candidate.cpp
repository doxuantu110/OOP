#include "Candidate.h"
string Candidate::getMa() {
	return Ma;
}
string Candidate::getTen() {
	return Ten;
}
string Candidate::getNgayThangNamSinh() {
	return NgayThangNamSinh;
}
float Candidate::TinhTongDiem() {
	return DiemToan + DiemAnh + DiemVan;
}
void Candidate::Nhap() {
	cout << "Ma: ";
	cin >> Ma;
	cin.ignore();
	cout << "Ho ten: ";
	getline(cin, Ten);
	cout << "Ngay thang nam sinh : ";
	cin >> NgayThangNamSinh;
	cout << "Diem Toan: ";
	cin >> DiemToan;
	cout << "Diem Anh: ";
	cin >> DiemAnh;
	cout << "Diem Van: ";
	cin >> DiemVan;
}
void Candidate::Xuat() {
	cout << "Ma: " << Ma << endl;
	cout << "Ho ten: " << Ten << endl;
	cout << "Ngay thang nam sinh: " << endl;
	cout << "Diem Toan : " << DiemToan << endl;;
	cout << "Diem Anh : " << DiemAnh << endl;
	cout << "Diem Van : " << DiemVan << endl;
	cout << endl;
}