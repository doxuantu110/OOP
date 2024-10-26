#include "CVector.h"
#include <cmath>
int CVector::getSoChieu() const {
	return vVector.size();
}
vector <float> CVector::getVector() const {
	return this->vVector;
}
istream& operator >> (istream& is, CVector& V) {
	cout << "\nSo chieu cua vetor: ";
	int iSoChieu;
	is >> iSoChieu;
	V.vVector.resize(iSoChieu);
	cout << "Nhap cac phan tu cua vector: ";
	for (int i = 0; i < iSoChieu; i++) {
		is >> V.vVector[i];
	}
	return is;
}
ostream& operator<< (ostream& os, CVector V) {
	os << "Vector co toa do: " << "(" ;
	for (int i = 0; i < V.getSoChieu(); i++) {
		os << V.vVector[i];
		if (i != V.getSoChieu() - 1) {
			os << ", ";
		}
	}
	os << ")" << endl;
	return os;
}

CVector CVector::operator + (CVector &A) const{
	if (getSoChieu() != A.getSoChieu()) {
		cout << "Hai vector khong cung chieu." << endl;
		return CVector();
	}
	CVector Cong;
	Cong.vVector.resize(getSoChieu());
	for (int i = 0; i < getSoChieu(); i++) {
		Cong.vVector[i] = vVector[i] + A.vVector[i];
	}
	return Cong;
}

CVector CVector::operator - (CVector &A) const {
	
	if (getSoChieu() != A.getSoChieu()) {
		cout << "Hai vector khong cung chieu." << endl;
		return CVector();
	}
	CVector Tru;
	Tru.vVector.resize(getSoChieu());
	for (int i = 0; i < getSoChieu(); i++) {
			Tru.vVector[i] = vVector[i] - A.vVector[i];
	}
	return Tru;
}
float& CVector::operator[](int index) {
	return vVector[index];
}
float CVector::operator * (CVector A) {
	float TichVoHuong = 0;
	if(getSoChieu() != A.getSoChieu()) cout << "Hai vector khong cung chieu." << endl;
	else
	{
		for (int i = 0; i < getSoChieu(); i++) {
			TichVoHuong += vVector[i] * A.vVector[i];
		}
	}
	return TichVoHuong;
}
float CVector::operator|| (CVector &A){
	float Sum = 0;
	for (int i = 0; i < A.getSoChieu(); i++) {
		Sum += A.vVector[i] * A.vVector[i];
	}
	return sqrt(Sum);
}