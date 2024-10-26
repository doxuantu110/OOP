#include "cThongKe.h"
void cThongKe::Nhap() {
	int a, b, c;
	cout << "Nhap so luong bo ban dau: ";
	cin >> a;
	cout << "Nhap so luong cuu ban dau: ";
	cin >> b;
	cout << "Nhap so luong de ban dau: ";
	cin >> c;
	int n = a + b + c;
	ThongKe.resize(n);
	for (int i = 0; i < a; i++) {
		ThongKe[i] = new cBo;
	} 
	for (int i = a; i < a + b; i++) {
		ThongKe[i] = new cCuu;
	}
	for (int i = a + b; i < n; i++) {
		ThongKe[i] = new cDe;
	}

}
void cThongKe::Keu() {
	cout << "Chu di vang, tat ca gia sua doi bat dau keu am i:" << endl;
	for (int i = 0; i < ThongKe.size(); i++) {
		ThongKe[i]->Keu();
		cout << "\t";
	}
	cout << endl;
}
void cThongKe::XuatSLMoiLoai() {
	int SLBo = 0, SLCuu = 0, SLDe = 0;
	for (int i = 0; i < ThongKe.size(); i++) {
		if (ThongKe[i]->getLoai() == 1) SLBo += (1 + ThongKe[i]->SinhCon());
		else if (ThongKe[i]->getLoai() == 2) SLCuu += (1 + ThongKe[i]->SinhCon());
		else SLDe += (1 + ThongKe[i]->SinhCon());
	}
	cout << "- So luong gia suc trong nong trai sau sinh la:" << endl;
	cout << " + Bo: " << SLBo << endl;
	cout << " + Cuu: " << SLCuu << endl;
	cout << " + De: " << SLDe << endl;
}
int cThongKe::TongLitSua() {
	int Sua = 0;
	for (int i = 0; i < ThongKe.size(); i++) {
		Sua += ThongKe[i]->Sua();
	}
	return Sua;
}
