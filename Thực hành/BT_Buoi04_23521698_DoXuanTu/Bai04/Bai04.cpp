// Bai04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CDate.h"

int main()
{
	CDate Date, Date1, Date2, NgayGui, NgayRut;
	int ngay;
	long long TienGui, TienRut, TienLai;
	float LaiSuat;
	cin >> Date;
	cout << "DD/MM/YYYY: " << Date << endl;
	Date1 = Date;
	cout << "\nNhap so ngay muon tang : ";
	cin >> ngay;
	cout << "Ngay thang nam sau khi tang " << ngay <<" ngay : " << Date1 + ngay << endl;
	cout << "Nhap so ngay muon giam : ";
	cin >> ngay;
	cout << "Ngay thang nam sau khi giam " << ngay << " ngay : " << Date1 - ngay << endl;
	cout << "\nNgay truoc do : " << --Date1 << endl;
	cout << "Ngay ke tiep : " << ++Date1 << endl;
	cout << "\nNhap ngay thang muon tinh khoang cach. " << endl;
	cin >> Date2;
	cout << "Khoang cach tu " << Date << " den " << Date2 << "(tinh bang ngay) la : " << Date2 - Date << endl;
	
	cout << "\n______________________________________________________" << endl;
	cout << "Bai Toan Tinh Lai (truong hop rut lai cuoi ky). " << endl;
	cout << "\nNgay gui : " << endl;
	cin >> NgayGui;
	cout << "So Tien gui (dong): ";
	cin >> TienGui;
	cout << "Lai suat (%): ";
	cin >> LaiSuat;
	cout << "Ngay rut : " << endl;
	cin >> NgayRut;
	TienRut = TienGui * (LaiSuat/100) * (NgayRut - NgayGui) / 365 + TienGui;
	TienLai = TienGui * (LaiSuat/100) * (NgayRut - NgayGui) / 365;
	cout << "Tien lai cuoi ky : " << TienLai << " dong" << endl;
	cout << "So Tien nhan duoc sau khi gui ngan hang tu ngay " << NgayGui << " den " << NgayRut << " voi lai suat " << LaiSuat << "% la : " << TienRut << " dong" << endl;

}

