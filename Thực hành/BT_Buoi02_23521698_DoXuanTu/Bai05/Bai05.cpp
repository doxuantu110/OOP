// Bai05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "NgayThangNam.h"

int main()
{
	NgayThangNam Date;
	Date.Nhap();
	Date.Xuat();
	int section;
	do {
		cout << "______ Thao Tac __________" << endl;
		cout << "1. Thay doi Ngay." << endl;
		cout << "2. Thay doi Thang." << endl;
		cout << "3. Thay doi Nam." << endl;
		cout << "4. Tang ngay." << endl;
		cout << "5. Giam ngay." << endl;
		cout << "6. Tang thang." << endl;
		cout << "7. Giam thang." << endl;
		cout << "8. Tang nam." << endl;
		cout << "9. Giam nam." << endl;
		cout << "10. Xuat thu trong tuan." << endl;
		cout << "11. Kiem tra nam nhuan." << endl;
		cout << "Nhap 0 de thoat!" << endl;
		cin >> section;
		switch (section)
		{
		case 1:
			int DoiNgay;
			cout << "Doi thanh ngay : ";
			cin >> DoiNgay;
			Date.setNgay(DoiNgay);
			Date.Xuat();
			break;
		case 2:
			int DoiThang;
			cout << "Doi thanh thang : ";
			cin >> DoiThang;
			Date.setThang(DoiThang);
			Date.Xuat();
			break;
		case 3 :
			int DoiNam;
			cout << "Doi thanh nam : ";
			cin >> DoiNam;
			Date.setNam(DoiNam);
			Date.Xuat();
			break;
		case 4 :
			cout << "So ngay tang: ";
			int SoNgayTang;
			cin >> SoNgayTang;
			Date.TangNgay(SoNgayTang);
			Date.Xuat();
			break;
		case 5:
			cout << "So thang tang: ";
			int SoThangTang;
			cin >> SoThangTang;
			Date.TangThang(SoThangTang);
			Date.Xuat();
			break;
		case 6:
			cout << "So nam tang: ";
			int SoNamTang;
			cin >> SoNamTang;
			Date.TangNam(SoNamTang);
			Date.Xuat();
			break;
		case 7:
			cout << "So ngay giam: ";
			int SoNgaygiam;
			cin >> SoNgaygiam;
			Date.GiamNgay(SoNgaygiam);
			Date.Xuat();
			break;
		case 8:
			cout << "So thang giam: ";
			int SoThanggiam;
			cin >> SoThanggiam;
			Date.GiamThang(SoThanggiam);
			Date.Xuat();
			break;
		case 9:
			cout << "So nam giam: ";
			int SoNamgiam;
			cin >> SoNamgiam;
			Date.GiamNam(SoNamgiam);
			Date.Xuat();
			break;
		case 10:
			switch (Date.ThuTrongTuan()) {
			case 0:
				cout << "Thu Bay" << endl;
				break;
			case 1:
				cout << "Chu Nhat" << endl;
				break;
			case 2:
				cout << "Thu Hai" << endl;
				break;
			case 3:
				cout << "Thu Ba" << endl;
				break;
			case 4:
				cout << "Thu Tu" << endl;
				break;
			case 5:
				cout << "Thu Nam" << endl;
				break;
			case 6:
				cout << "Thu Sau" << endl;
				break;
			}
			break;
		case 11:
			if (Date.KiemTraNamNhuan()) {
				cout << "La nam Nhuan." << endl;
			}
			else
				cout << "Khong la nam Nhuan." << endl;
			break;
		default:
			break;
		}
	} while (section != 0);


}

