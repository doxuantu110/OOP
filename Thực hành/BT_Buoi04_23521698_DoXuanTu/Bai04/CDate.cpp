#include "CDate.h"
bool CDate::KiemTraNamNhuan() {
	if (iNam % 400 == 0 || (iNam % 4 == 0 && iNam % 100 != 0))
		return true;
	else
		return false;
}
bool CDate::CheckDate() {
	switch (iThang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		if (iNgay <= 0 || iNgay > 31)
			return false;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (iNgay <= 0 || iThang > 30)
			return false;
		break;
	}
	case 2:
	{
		if (KiemTraNamNhuan())
		{
			if (iNgay <= 0 || iNgay > 29)
				return false;
		}
		else if (iNgay <= 0 || iNgay > 28)
			return false;
		break;
	}
	default:
	{
		return false;
		break;
	}
	}
	return true;
}
istream& operator >> (istream& is, CDate& D) {
	do {
		cout << "Nhap ngay thang nam : ";
		is >> D.iNgay >> D.iThang >> D.iNam;
		if (!D.CheckDate())
			cout << "Ngay thang nam khong hop le. Hay nhap lai." << endl;
	} while (!D.CheckDate());
	return is;
}
ostream& operator << (ostream& os, CDate D) {
	os << D.iNgay << "/" << D.iThang << "/" << D.iNam;
	return os;
}

CDate CDate :: operator+ (int ngay) {
	CDate D;
	D.iNgay = this->iNgay;
	D.iThang = this->iThang;
	D.iNam = this->iNam;
	int temp = D.iNgay + ngay;
	do
	{
		switch (D.iThang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if (temp > 31)
			{
				D.iThang++;
				if (D.iThang == 13)
				{
					D.iThang = 1;
					D.iNam++;
				}
				temp -= 31;
			}
			else
			{
				D.iNgay = temp;
				temp = 0;
			}
			break;
		}
		case 4:
		case 6: 
		case 9:
		case 11:
		{
			if (temp > 30)
			{
				D.iThang++;
				temp -= 30;
			}
			else
			{
				D.iNgay = temp;
				temp = 0;
			}
			break;
		}
		case 2:
		{
			if (D.KiemTraNamNhuan())
			{
				if (temp > 29)
				{
					D.iThang++;
					temp -= 29;
				}
				else
				{
					D.iNgay = temp;
					temp = 0;
				}
			}
			else
			{
				if (temp > 28)
				{
					D.iThang++;
					temp -= 28;
				}
				else
				{
					D.iNgay = temp;
					temp = 0;
				}
			}
			break;
		}
		}
	} while (temp > 0);
	return D;
}
CDate CDate:: operator-(int ngay) {
	{
		CDate D;
		D.iNgay = this->iNgay;
		D.iThang = this->iThang;
		D.iNam = this->iNam;
		int temp = ngay;
		do
		{
			if (D.iNgay > temp)
			{
				D.iNgay -= temp;
				temp = 0;
			}
			else
			{
				temp -= D.iNgay;
				D.iThang--;
				switch (D.iThang)
				{
				case 1:
				case 3: 
				case 5:
				case 7:
				case 8:
				case 10:
				{
					D.iNgay = 31;
					break;
				}
				case 4: 
				case 6:
				case 9:
				case 11:
				{
					D.iNgay = 30;
					break;
				}
				case 2:
				{
					if (D.KiemTraNamNhuan())
					{
						D.iNgay = 29;
					}
					else
					{
						D.iNgay = 28;
					}
					break;
				}
				case 0:
				{
					D.iThang = 12;
					D.iNam--;
					D.iNgay = 31;
					break;
				}
				}
			}
		} while (temp > 0);
		return D;
	}
}
CDate& CDate::operator++() {
	CDate D;
	D.iNgay = this->iNgay;
	D.iThang = this->iThang;
	D.iNam = this->iNam;
	D.iNgay = D.iNgay + 1;
	if (D.iThang == 1 || D.iThang == 3 || D.iThang == 5 || D.iThang == 7 || D.iThang == 8 || D.iThang == 10 || D.iThang == 12) {
		if (D.iNgay > 31)
		{
			if (D.iThang == 12) {
				D.iThang = 1;
				D.iNam++;
				D.iNgay -= 31;
			}
			else
			{
				D.iThang++;
				D.iNgay -= 31;
			}
		}
	}
	else if (D.iThang == 4 || D.iThang == 6 || D.iThang == 9 || D.iThang == 11) {
		if (D.iNgay > 30) {
			D.iThang++;
			D.iNgay -= 30;
		}
	}
	else {
		if (KiemTraNamNhuan()) {
			if (D.iNgay > 29) {
				D.iThang++;
				D.iNgay -= 29;
			}
		}
		else
		{
			if (D.iNgay > 28) {
				D.iThang++;
				D.iNgay -= 28;
			}
		}
	}
	return D;
}
CDate& CDate::operator--() {
	CDate D;
	D.iNgay = this->iNgay;
	D.iThang = this->iThang;
	D.iNam = this->iNam;
	D.iNgay = D.iNgay - 1;
	if (D.iNgay < 1) {
		D.iThang--;
		if (D.iThang == 1 || D.iThang == 3 || D.iThang == 5 || D.iThang == 7 || D.iThang == 8 || D.iThang == 10 || D.iThang == 12) {
			if (D.iThang == 12) {
				D.iNam--;
				D.iNgay = 31 + D.iNgay;
			}
			else
				D.iNgay = 31 + D.iNgay;
		}
		else if (D.iThang == 4 || D.iThang == 6 || D.iThang == 9 || D.iThang == 11) {
			D.iNgay = 30 + D.iNgay;
		}
		else {
			if (KiemTraNamNhuan()) {
				D.iNgay = 29 + D.iNgay;
			}
			else
			{
				D.iNgay = 28 + D.iNgay;
			}
		}
	}
	return D;
}

long CDate::operator - (CDate D)
	{
		CDate Date;
		Date.iNgay = this->iNgay;
		Date.iThang = this->iThang;
		Date.iNam = this->iNam;
		long temp1 = Date.iNgay;
		do
		{
			switch (Date.iThang)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				temp1 += 31;
				Date.iThang--;
				if (Date.iThang == 0)
				{
					Date.iNam--;
					Date.iThang = 12;
				}
				break;
			}
			case 4: 
			case 6:
			case 9:
			case 11:
			{
				temp1 += 30;
				Date.iThang--;
				break;
			}
			case 2:
			{
				if (Date.KiemTraNamNhuan())
				{
					temp1 += 29;
					Date.iThang--;
				}
				else
				{
					temp1 += 28;
					Date.iThang--;
				}
				break;
			}
			}
		} while (Date.iNam > 0);
		Date.iNgay = D.iNgay;
		Date.iThang = D.iThang;
		Date.iNam = D.iNam;
		long temp2 = Date.iNgay;
		do
		{
			switch (Date.iThang)
			{
			case 1:
			case 3: 
			case 5: 
			case 7: 
			case 8: 
			case 10: 
			case 12:
			{
				temp2 += 31;
				Date.iThang--;
				if (Date.iThang == 0)
				{
					Date.iNam--;
					Date.iThang = 12;
				}
				break;
			}
			case 4: 
			case 6: case 9: case 11:
			{
				temp2 += 30;
				Date.iThang--;
				break;
			}
			case 2:
			{
				if (Date.KiemTraNamNhuan())
				{
					temp2 += 29;
					Date.iThang--;
				}
				else
				{
					temp2 += 28;
					Date.iThang--;
				}
				break;
			}
			}
		} while (Date.iNam > 0);
		return abs(temp1 - temp2);
	}

