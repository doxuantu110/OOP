// Bai03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CTime.h"

int main()
{
	CTime Time, Time1;
	cin >> Time;
	cout << "hh:mm:ss: " << Time;
	Time1 = Time;
	int ThemS, GiamS;
	cout << "\nNhap so Giay muon Tang : ";
	cin >> ThemS;
	cout << "Thoi gian sau khi tang " << ThemS << " giay : " << Time1 + ThemS << endl;
	cout << "Nhap so Giay muon Giam : ";
	cin >> GiamS;
	cout << "Thoi gian sau khi giam " << GiamS << " giay : " << Time1 - GiamS << endl;
	cout << "Thoi gian sau khi tang 1 giay : " << ++Time << endl;
	cout << "Thoi gia sau giam 1 giay : " << --Time << endl;
}

