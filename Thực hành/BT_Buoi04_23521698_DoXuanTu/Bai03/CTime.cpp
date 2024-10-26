#include "CTime.h"
istream& operator >> (istream& is, CTime &T) {
	do {
		cout << "Nhap gio phut giay : ";
		is >> T.iGio >> T.iPhut >> T.iGiay;
	} while (T.iGio < 0 && T.iGio > 24 && T.iPhut < 0 && T.iPhut >=60 && T.iGiay < 0 && T.iGiay >= 60);
	return is;
}
ostream& operator << (ostream& os, CTime T) {
	while (T.iGiay >= 60)
	{
		T.iGiay = T.iGiay - 60;
		T.iPhut++;
	}
	while (T.iPhut >= 60)
	{
		T.iPhut = T.iPhut - 60;
		T.iGio++;
	}
	os << T.iGio << ":" << T.iPhut << ":" << T.iGiay << endl;
	return os;
}

CTime CTime::operator+(int s) const{
	CTime TangTime;
	TangTime = *this;
	TangTime.iGiay += s;
	return TangTime;
}

CTime CTime::operator-(int seconds) const {
	CTime GiamTime = *this;
	GiamTime.iGiay -= seconds;
	if (GiamTime.iGiay < 0) {
		int iPhutBot = (-GiamTime.iGiay + 59) / 60;
		GiamTime.iGiay = 60 - (-GiamTime.iGiay % 60);
		GiamTime.iPhut -= iPhutBot;
		if (GiamTime.iPhut < 0) {
			int iGioBot = (-GiamTime.iPhut + 59) / 60;
			GiamTime.iPhut = 60 - (-GiamTime.iPhut % 60);
			GiamTime.iGio -= iGioBot;
			if (GiamTime.iGio < 0) {
				GiamTime.iGio = 24 + GiamTime.iGio % 24;
			}
		}
	}
	return GiamTime;
}
CTime& CTime::operator++ () {
	*this = *this + 1;
	return *this;
}
CTime& CTime::operator--() {
	*this = *this - 1;
	return *this;
}