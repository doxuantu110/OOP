#include "cArray.h"
#include <climits>

void cArray::TaoMang() {
	/*cout << "Nhap so luong phan tu : ";
	cin >> n;*/
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void cArray::XuatMang() {
	cout << "Mang: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
}
int cArray::DemSoLanXuatHien(int x) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			dem++;
		}
	}
	return dem;
}
bool cArray::KiemTraTangDan() {
	for (int i = 0; i < n; i++) {
		if (a[i] > a[i + 1]) return false;
	}
	return true;
}
int cArray::TimLeNhoNhat() {
	int min = INT_MAX;
	for (int i = 0; i < n; i++) {
		if ((a[i] % 2 != 0) && a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
bool LaSoNguyenTo(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return n > 1;
}
int cArray::TimSNTMax() {
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (LaSoNguyenTo(a[i]) && a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

// Sap xep bang insertion sort
void cArray::SapXepTangDan() {
	for (int i = 1; i < n; i++) {
		int pos = i - 1, value = a[i];
		while (pos >= 0 && value < a[pos]) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = value;
	}
}
void cArray::SapXepGiamDan() {
	for (int i = 1; i < n; i++) {
		int pos = i - 1, value = a[i];
		while (pos >= 0 && value > a[pos]) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = value;
	}
}