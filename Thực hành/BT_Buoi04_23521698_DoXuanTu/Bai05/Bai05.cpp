// Bai05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cDaThuc.h"

int main()
{
	cDaThuc A,B;
	float x;
	cout << "Nhap da thuc: " << endl;
	cin >> A;
	cout << A << endl;
	cout << "Nhap gia tri x : ";
	cin >> x;
	cout << "Gia tri cua da thuc khi x = " << x << " la: " << A(x) << endl;
	cout << "\nNhap da thuc thu hai: " << endl;
	cin >> B;
	cout << B << endl;
	cout << "Nhap gia tri x : ";
	cin >> x;
	cout << "Gia tri cua da thuc khi x = " << x << " la: " << B(x) << endl;
	cout << "\nTong hai da thuc la: " << A + B << endl;
	cout << "Hieu hai da thuc la: " << A - B << endl;

}

