#include "DaThuc.h"
void DaThuc::NhapDaThuc() {
	cout << "Nhap bac cua Da Thuc : ";
	cin >> n;
	vDaThuc.resize(n + 1);
	for (int i = n; i >= 0; i--) {
		int heso;
		cout << "Nhap he so cua bac " << i << " : ";
		cin >> heso;
		vDaThuc[i].setBac(i);
		vDaThuc[i].setHeSo(heso);

	}
}
int DaThuc::n = 0;
void DaThuc::XuatDaThuc() {
    for (int i = vDaThuc.size() - 1; i >= 0; i--) {
        vDaThuc[i].Xuat();
    }
    cout << endl;
}
void DaThuc::setDaThuc(vector <DonThuc> vDonThuc) {
    this->vDaThuc = vDaThuc;
}
float DaThuc::TinhGiaTriDaThuc(float x) {
    float Sum = 0;
    for (int i = 0; i < vDaThuc.size(); i++) {
        Sum += vDaThuc[i].TinhGiaTri(x);
    }
    return Sum;
}

DaThuc DaThuc::Cong(DaThuc DT) {
    DaThuc Tong;
    int i = 0, j = 0;
    while (i < vDaThuc.size() && j < DT.vDaThuc.size()) {
        if (vDaThuc[i].getBac() == DT.vDaThuc[j].getBac()) {
            Tong.vDaThuc.push_back(vDaThuc[i].Cong(DT.vDaThuc[j]));
            i++;
            j++;
        }
        else if (vDaThuc[i].getBac() > DT.vDaThuc[j].getBac()) {
            Tong.vDaThuc.push_back(vDaThuc[i]);
            i++;
        }
        else {
            Tong.vDaThuc.push_back(DT.vDaThuc[j]);
            j++;
        }
    }
    while (i < vDaThuc.size()) {
        Tong.vDaThuc.push_back(vDaThuc[i++]);
    }
    while (j < DT.vDaThuc.size()) {
        Tong.vDaThuc.push_back(DT.vDaThuc[j++]);
    }
    return Tong;
}

DaThuc DaThuc::Tru(DaThuc DT) {
    DaThuc Hieu;
    int i = 0, j = 0;
    while (i < vDaThuc.size() && j < DT.vDaThuc.size()) {
        if (vDaThuc[i].getBac() == DT.vDaThuc[j].getBac()) {
            Hieu.vDaThuc.push_back(vDaThuc[i].Tru(DT.vDaThuc[j]));
            i++;
            j++;
        }
        else if (vDaThuc[i].getBac() > DT.vDaThuc[j].getBac()) {
            Hieu.vDaThuc.push_back(vDaThuc[i]);
            i++;
        }
        else {
            DT.vDaThuc[j].setHeSo(DT.vDaThuc[j].getHeSo() * -1);
            Hieu.vDaThuc.push_back(DT.vDaThuc[j]);
            j++;
        }
    }
    while (i < vDaThuc.size()) {
        Hieu.vDaThuc.push_back(vDaThuc[i++]);
    }
    while (j < DT.vDaThuc.size()) {
        DT.vDaThuc[j].setHeSo(DT.vDaThuc[j].getHeSo() * -1);
        Hieu.vDaThuc.push_back(DT.vDaThuc[j]);
        j++;
    }
    return Hieu;
}
