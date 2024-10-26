#include "cDaThuc.h"
istream& operator >> (istream& is, cDaThuc& DT) {
	cout << "Nhap bac cua Da Thuc : ";
	is >> DT.iBac;
	DT.vHeSo.resize(DT.iBac + 1);
	for (int i = DT.iBac; i >= 0; i--) {
		cout << "Nhap he so cua bac " << i << " : ";
		is >> DT.vHeSo[i];
	}
	return is;
}

ostream& operator << (ostream& os, cDaThuc DT) {
	if (DT.iBac != 0) {
		for (int i = DT.iBac; i > 0; i--) {
			if (i == DT.iBac) {
				if (DT.vHeSo[i] < 0) {
					os << DT.vHeSo[i];
					os << "x^";
					os << i;
					continue;
				}
			}
			if (DT.vHeSo[i] < 0) {
				os << " - ";
				os << abs(DT.vHeSo[i]);
			}
			else {
				if (i != DT.iBac) {
					os << " + ";
				}
				os << DT.vHeSo[i];
			}
			os << "x^";
			os << i;
		}
		if (DT.vHeSo[1] >= 0) {
			os << " + ";
		}
		else {
			os << " - ";
		}
	}
	os << abs(DT.vHeSo[0]);
	return os;
}

float TinhGiaTri(float HeSo, float x) {
	return HeSo * x;
}
float cDaThuc::operator()(float x) const {
	float Sum = 0;
	for (int i = 0; i < vHeSo.size(); i++) {
		Sum += TinhGiaTri(vHeSo[i], x);
	}
	return Sum;
}
cDaThuc cDaThuc::operator + (cDaThuc DT) const {
	int MaxBac = max(iBac, DT.iBac);
	cDaThuc Cong(MaxBac);
	for (int i = 0; i <= MaxBac; i++) {
		if (i <= iBac && i <= DT.iBac) {
			Cong.vHeSo[i] = vHeSo[i] + DT.vHeSo[i];
		}
		else if (i <= iBac) {
			Cong.vHeSo[i] = vHeSo[i];
		}
		else if (i <= DT.iBac) {
			Cong.vHeSo[i] = DT.vHeSo[i];
		}
		else {
			Cong.vHeSo[i] = 0;
		}

	}
	return Cong;	
}

cDaThuc cDaThuc::operator - (cDaThuc DT) const {
	int MaxBac = max(iBac, DT.iBac);
	cDaThuc Tru(MaxBac);
	for (int i = 0; i <= MaxBac; i++) {
		if (i <= iBac && i <= DT.iBac) {
			Tru.vHeSo[i] = vHeSo[i] - DT.vHeSo[i];
		}
		else if (i <= iBac) {
			Tru.vHeSo[i] = vHeSo[i];
		}
		else if (i <= DT.iBac) {
			Tru.vHeSo[i] = DT.vHeSo[i];
		}
		else {
			Tru.vHeSo[i] = 0;
		}

	}
	return Tru;
}