// Bai02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Diem.h"
int main()
{
	Diem A;
	A.NhapMotDiem();
	cout << "Toa do diem A : ";
	A.XuatMotDiem();
	cout << "Hoanh do cua diem A : " << A.getHoanhDo() << endl;
	cout << "Tung do cua diem A : " << A.getTungDo() << endl;
	float x, y;
	cout << "Hoanh do va tung do thay doi : ";
	cin >> x >> y;
	A.setHoanhDo(x);
	A.setTungDo(y);
	cout << "Toa do cua diem sau khi thay doi : ";
	A.XuatMotDiem();
	cout << "Nhap vector tinh tien : ";
	float a, b;
	cin >> a >> b;
	A.TinhTien(a, b);
	cout << "Toa do cua diem sau khi tinh tien: ";
	A.XuatMotDiem();
}
