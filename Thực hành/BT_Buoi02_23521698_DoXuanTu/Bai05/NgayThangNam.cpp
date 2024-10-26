#include "NgayThangNam.h"
void NgayThangNam::Nhap() {
	do {
		cout << "Nhap ngay thang nam : ";
		cin >> iNgay >> iThang >> iNam;
	} while (iNgay < 1 && iNgay > 31 && iThang < 1 && iThang > 12 && iNam < 1);
}
void NgayThangNam::Xuat() {
	cout << "dd/mm/yyyy : " << iNgay << "/" << iThang << "/" << iNam << endl;
	cout << endl;
}
void NgayThangNam::setNgay(int iNgay) {
	this->iNgay = iNgay;
}
void NgayThangNam::setThang(int iThang) {
	this->iThang = iThang;
}
void NgayThangNam::setNam(int iNam) {
	this->iNam = iNam;
}
int NgayThangNam::getNgay() {
	return iNgay;
}
int NgayThangNam::getThang() {
	return iThang;
}int NgayThangNam::getNam() {
	return iNam;
}
bool NgayThangNam::KiemTraNamNhuan() {
	if (iNam % 400 == 0 || (iNam % 4 == 0 && iNam % 100 != 0))
		return true;
	else
		return false;
}
void NgayThangNam::TangNgay(int ngay) {
	iNgay += ngay;
	if (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12) {
		if (iNgay > 31)
		{
			if (iThang == 12) {
				iThang = 1;
				iNam++;
				iNgay -= 31;
			}
			else
			{
				iThang++;
				iNgay -= 31;
			}
		}
	}
	else if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) {
		if (iThang > 30) {
			iThang++;
			iNgay -= 30;
		}
	}
	else  {
		if (KiemTraNamNhuan()) {
			if (iNgay > 29) {
				iThang++;
				iNgay -= 29;
			}
		}
		else
		{
			if (iNgay > 28) {
				iThang++;
				iNgay -= 28;
			}
		}
	}
}
void NgayThangNam::TangThang(int thang) {
	iThang += thang;
	if (iThang > 12) {
		iNam++;
		iThang -= 12;
	}
}void NgayThangNam::TangNam(int nam) {
	iNam += nam;
}
void NgayThangNam::GiamNgay(int ngay) {
	iNgay -= ngay;
	if (iNgay < 1) {
		iThang--;
		if (iThang == 1 || iThang == 3 || iThang == 5 || iThang == 7 || iThang == 8 || iThang == 10 || iThang == 12) {
			if (iThang == 12) {
				iNam--;
				iNgay = 31 + iNgay;
			}
			else
				iNgay = 31 + iNgay;
		}
		else if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) {
			iNgay = 30 + iNgay;
		}
		else {
			if (KiemTraNamNhuan()) {
				iNgay = 29 + iNgay;
			}
			else
			{
				iNgay = 28 + iNgay;
			}
		}
	}
}
void NgayThangNam::GiamThang(int thang) {
	iThang -= thang;
	if (iThang < 1) {
		iNam--;
		iThang = 12 + iThang;
	}
}void NgayThangNam::GiamNam(int nam) {
	iNam -= nam;
}
int NgayThangNam::ThuTrongTuan() {
	int Thu;
	if(iThang < 3) {
		iThang += 12;
		iNam--;
	}
	int TheKy = iNam / 100;
	int K = iNam % 100;
	Thu = (iNgay + ((13 * (iThang + 1)) / 5) + K + (K / 4) + (TheKy / 4) + (5 * TheKy)) % 7;

	// Cong thuc Zeller cho lich Gregorian (lich duong)
	// Nguon tham khao : https://en.wikipedia.org/wiki/Zeller%27s_congruence
	// va: https://gist.github.com/skillaug/6578205618e7f70d9094b908a386e518
	return Thu;
}
