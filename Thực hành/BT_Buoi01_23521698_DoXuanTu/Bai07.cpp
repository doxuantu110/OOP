// Bai07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Date {
	int ngay, thang, nam;
};
void Nhap(Date& D);
void NgayKeTiep(Date& D);
void Xuat(Date D);

int main()
{
	Date A;
	Nhap(A);
	NgayKeTiep(A);
	Xuat(A);
	return 0;
}

void Nhap(Date& D) {
	do {
		cout << "Nhap ngay thang nam : ";
		cin >> D.ngay >> D.thang >> D.nam;
	} while (D.ngay < 1 && D.ngay > 31 && D.thang < 1 && D.thang > 12 && D.nam < 0);
}
void NgayKeTiep(Date& D) {
	switch (D.thang)
	{
	case 12:
		if (D.ngay == 31) {
			D.ngay = 1;
			D.thang = 1;
			D.nam++;
		}
		else
			D.ngay++;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		if (D.ngay == 31) {
			D.ngay = 1;
			D.thang++;
		}
		else {
			D.ngay++;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (D.ngay == 30) {
			D.ngay = 1;
			D.thang++;
		}
		else {
			D.ngay++;
		}
		break;
	default:
		if (D.nam % 400 == 0 || (D.nam % 4 == 0 && D.nam % 100 != 0)) {
			if (D.ngay == 29) {
				D.ngay = 1;
				D.thang++;
			}
			else
				D.ngay++;
		}
		else if (D.ngay == 28)
		{
			D.ngay = 1;
			D.thang++;
		}
		else if (D.ngay < 28) {
			D.ngay++;
		}
		else
			cout << "Ngay thang khong ton tai!" << endl;
		break;
	}
}
void Xuat(Date D) {
	cout << "Ngay ke tiep : " << D.ngay << "/" << D.thang << "/" << D.nam << endl;
}