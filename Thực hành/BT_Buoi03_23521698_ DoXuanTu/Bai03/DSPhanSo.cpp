#include "DSPhanSo.h"
#include <algorithm>
void DSPhanSo::NhapDSPhanSo() {
	cout << "Nhap so luong phan so : ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cPhanSo PS;
		is >> PS;
		DsPhanSo.push_back(PS);
	}
}
void DSPhanSo::XuatDSPhanSo() {
	for (int i = 0; i < DsPhanSo.size(); i++) {
		os << DsPhanSo[i];
	}
	return os;
}
cPhanSo DSPhanSo::TinhTong() {
	cPhanSo Tong (DsPhanSo[0]);
	for (int i = 1; i < DsPhanSo.size(); i++) {
		Tong.setTuSo(Tong.getTuSo() * DsPhanSo[i].getMauSo() + Tong.getMauSo() * DsPhanSo[i].getTuSo());
		Tong.setMauSo(Tong.getMauSo() * DsPhanSo[i].getMauSo());
		Tong.ToiGianPhanSo(Tong);
	}
	return Tong;
}
cPhanSo DSPhanSo::TimMax() {
	cPhanSo Max(DsPhanSo[0]);
	for (int i = 1; i < DsPhanSo.size(); i++) {
		if (Max.getValue() < DsPhanSo[i].getValue()) {
			Max = DsPhanSo[i];
		}
	}
	return Max;
}

cPhanSo DSPhanSo::TimMin() {
	cPhanSo Min(DsPhanSo[0]);
	for (int i = 1; i < DsPhanSo.size(); i++) {
		if (Min.getValue() > DsPhanSo[i].getValue()){
			Min = DsPhanSo[i];
		}
	}
	return Min;
}

void DSPhanSo::QuickSortTang(int left, int right) {
	int i, j;
	double pivot_val = DsPhanSo[(left + right) / 2].getValue();
	i = left; j = right;

	while (i <= j) {
		while (DsPhanSo[i].getValue() < pivot_val) i++;
		while (DsPhanSo[j].getValue() > pivot_val) j--;
		if (i <= j) {
			swap(DsPhanSo[i], DsPhanSo[j]);
			i++; j--;
		}
	}

	if (left < j)    QuickSortTang(left, j);
	if (i < right)   QuickSortTang(i, right);
}

void DSPhanSo::SapXepTangDan() {
	QuickSortTang(0, DsPhanSo.size() - 1);
}

void DSPhanSo::QuickSortGiam(int left, int right) {
	int i, j;
	double pivot_val = DsPhanSo[(left + right) / 2].getValue();
	i = left; j = right;

	while (i <= j) {
		while (DsPhanSo[i].getValue() > pivot_val) i++;
		while (DsPhanSo[j].getValue() < pivot_val) j--;
		if (i <= j) {
			swap(DsPhanSo[i], DsPhanSo[j]);
			i++; j--;
		}
	}

	if (left < j)    QuickSortGiam(left, j);
	if (i < right)   QuickSortGiam(i, right);
}

void DSPhanSo::SapXepGiamDan() {
	QuickSortGiam(0, DsPhanSo.size() - 1);
}
