#include "TamGiac.h"

void TamGiac::Nhap(){
	int kt;
	do {
		kt = 0;
		cout << "Nhap dinh A : ";
		A.Nhap();
		cout << "Nhap dinh B : ";
		B.Nhap();
		cout << "Nhap dinh C : ";
		C.Nhap();
		cDiem D, E;
		D = A.Vector(B);
		E = A.Vector(C);
		if (float(D.getx() * E.gety()) == float(D.gety() * E.getx())) // 3 diem thang hang
		{
			kt = 1;
			cout << "\nTam giac khong ton tai! Nhap lai!";
		}
		cout << "\n";
	} while (kt);
}
void TamGiac::Xuat() {
	cout << "Tam giac tao boi 3 diem : ";
	A.Xuat();
	cout << ", ";
	B.Xuat();
	cout << ", ";
	C.Xuat();
}
void TamGiac::TinhTien(float x, float y) {
	A.TinhTien(x, y);
	B.TinhTien(x, y);
	C.TinhTien(x, y);
}
void TamGiac::Quay(float GocQuay) {
	A.Quay(GocQuay);
	B.Quay(GocQuay);
	C.Quay(GocQuay);
}
void TamGiac::PhongTo(float k) {
	A.setxy(A.getx() * k, A.gety() * k);
	B.setxy(B.getx() * k, B.gety() * k);
	C.setxy(C.getx() * k, C.gety() * k);
}
void TamGiac::Thunho(float k) {
	A.setxy(A.getx() / k, A.gety() / k);
	B.setxy(B.getx() / k, B.gety() / k);
	C.setxy(C.getx() / k, C.gety() / k);
}