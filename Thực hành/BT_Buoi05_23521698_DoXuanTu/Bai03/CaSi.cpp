#include "CaSi.h"
void CaSi::Nhap() {
	Nguoi::Nhap();
	cout << "Nhap the loai nhac: ";
	cin.ignore();
	getline(cin, MVMoiNhat);
	cout << "Nhap MV moi nhat: ";
	getline(cin, MVMoiNhat);
}
void CaSi::Xuat() {
	Nguoi::Xuat();
	cout << "The loai: " << TheLoai << endl;
	cout << "MV moi nhat: " << MVMoiNhat << endl;
}