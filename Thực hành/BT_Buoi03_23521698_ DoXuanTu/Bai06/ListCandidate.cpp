#include "ListCandidate.h"
void ListCandidate::Nhap() {
	int n;
	cout << "Nhap so luong thi sinh : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin thi sinh " << i + 1 << " : " << endl;
		Candidate ts;
		ts.Nhap();
		ThiSinh.push_back(ts);
	}
}
void ListCandidate::Xuat() {
	for (int i = 0; i < ThiSinh.size(); i++) {
		ThiSinh[i].Xuat();
	}
}
void ListCandidate::XuatThiSinhDat() {
	cout << "\nThi sinh co tong diem lon hon 15 : " << endl;
	for (int i = 0; i < ThiSinh.size(); i++) {
		if (ThiSinh[i].TinhTongDiem() > 15) {
			ThiSinh[i].Xuat();
		}
	}
	cout << endl;
}
Candidate ListCandidate::TimThiSinhDiemMax() {
	Candidate max = ThiSinh[0];
	for (int i = 0; i < ThiSinh.size(); i++) {
		if (ThiSinh[i].TinhTongDiem() > max.TinhTongDiem()) {
			max = ThiSinh[i];
		}
	}
	return max;
}
bool Compare(Candidate ThiSinh1, Candidate ThiSinh2) {
	return ThiSinh1.TinhTongDiem() > ThiSinh2.TinhTongDiem();
}
void ListCandidate::SapXepTheoDiemGiamDan() {
	sort(ThiSinh.begin(), ThiSinh.end(), Compare);
}
