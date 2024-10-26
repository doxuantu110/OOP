#include "cPhanSo.h"
void PhanSo::Nhap()
{
    cin >> iTuSo >> iMauSo;
}
int GCD(int a, int b) {
    while (b) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void PhanSo::ToiGianPhanSo(PhanSo& PhanSo)
{
    int UocChungLonNhat = GCD(PhanSo.iTuSo, PhanSo.iMauSo);
    PhanSo.iTuSo /= UocChungLonNhat;
    PhanSo.iMauSo /= UocChungLonNhat;
}

void PhanSo::Xuat()
{
    if (iMauSo == 0)
    {
        cout << "Error";
    }
    else if (iMauSo != 0)
    {
        if (iTuSo == 0)
        {
            cout << "0";
        }
        else if (iTuSo > 0 && iMauSo < 0 )
        {
            cout << -iTuSo << "/" << -iMauSo;
        }
        else
        {
            cout << iTuSo << "/" << iMauSo;
        }
    }
}

void PhanSo::Cong(PhanSo PS)
{
    iTuSo = iTuSo * PS.iMauSo + iMauSo * PS.iTuSo;
    iMauSo = iMauSo * PS.iMauSo;
}

void PhanSo::Tru(PhanSo PS)
{
    iTuSo = iTuSo * PS.iMauSo - iMauSo * PS.iTuSo;
    iMauSo = iMauSo * PS.iMauSo;
}

void PhanSo::Nhan(PhanSo PS)
{
    iTuSo = iTuSo * PS.iTuSo;
    iMauSo = iMauSo * PS.iMauSo;
}

void PhanSo::Chia(PhanSo PS)
{
    iTuSo = iTuSo * PS.iMauSo;
    iMauSo = iMauSo * PS.iMauSo;
}

void PhanSo::DinhGiaTriChoPhanSo(PhanSo PS) {
    float GiaTri = PS.iMauSo / PS.iMauSo;
    cout << "Gia tri cua phan so la : " << endl;
}
