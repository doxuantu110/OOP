// Bai04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ThoiGian.h"

int main()
{
	ThoiGian Time;

	Time.Nhap();
	Time.Xuat();
	int GioThayDoi, PhutThayDoi, GiayThayDoi;
	int section;
	do {
		cout << "Thay Doi Thoi Gian : " << endl;
		cout << "1. Thay doi Gio." << endl;
		cout << "2. Thay doi Phut." << endl;
		cout << "3. Thay doi Giay." << endl;
		cout << "Nhap 0 de thoat!" << endl;
		cin >> section;

		switch (section)
		{
		case 1:
			cout << "Nhap Gio thay doi : ";
			cin >> GioThayDoi;
			Time.setGio(GioThayDoi);
			break;
		case 2:
			cout << "Nhap Phut thay doi : ";
			cin >> PhutThayDoi;
			Time.setPhut(PhutThayDoi);
			break;
		case 3:
			cout << "Nhap Giay thay doi : ";
			cin >> GiayThayDoi;
			Time.setGiay(GiayThayDoi);
			break;
		default:
			break;
		}
	} while (section != 0);
	cout << "Thoi gian sau khi doi : ";
	Time.Xuat();
	int section1, TangS,TangM,TangH, GiamS,GiamM,GiamH;
	
	do {
		cout << "Tang Giam Thoi Gian : " << endl;
		cout << "1. Tang giay : " << endl;
		cout << "2. Tang phut : " << endl;
		cout << "3. Tang gio : " << endl;
		cout << "4. Giam giay : " << endl;
		cout << "5. Giam phut : " << endl;
		cout << "6. Giam gio : " << endl;
		cout << "Nhap 0 de thoat !" << endl;
		cin >> section1;
		switch (section1)
		{
		case 1:
			cout << "Nhap so Giay muon tang: ";
			cin >> TangS;
			Time.TangGiay(TangS);
			cout << "Thoi gian sau khi Tang hoac Giam : ";
			Time.Xuat();
			break;
		case 2:
			cout << "Nhap so Phut muon tang: ";
			cin >> TangM;
			Time.TangPhut(TangM);
			cout << "Thoi gian sau khi Tang hoac Giam : ";
			Time.Xuat();
			break;
		case 3:
			cout << "Nhap so Gio muon tang: ";
			cin >> TangH;
			Time.TangGio(TangH);
			cout << "Thoi gian sau khi Tang hoac Giam : ";
			Time.Xuat();
			break;
		case 4: 
			cout << "Nhap so Giay muon giam: ";
			cin >> GiamS;
			Time.GiamGiay(GiamS);
			cout << "Thoi gian sau khi Tang hoac Giam : ";
			Time.Xuat();
			break;
		case 5:
			cout << "Nhap so Phut muon giam: ";
			cin >> GiamM;
			Time.GiamPhut(GiamM);
			cout << "Thoi gian sau khi Tang hoac Giam : ";
			Time.Xuat();
			break;
		case 6:
			cout << "Nhap so Gio muon giam: ";
			cin >> GiamH;
			Time.GiamGio(GiamH);
			cout << "Thoi gian sau khi Tang hoac Giam : ";
			Time.Xuat();
			break;
		default:
			break;
		}

	} while (section1 != 0);
	
	return 0;

}

