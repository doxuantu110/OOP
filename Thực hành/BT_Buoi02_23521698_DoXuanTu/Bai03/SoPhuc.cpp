#include "SoPhuc.h"

void SoPhuc::Nhap()
{
    cin >> fPhanThuc >> fPhanAo;
}

void SoPhuc::Xuat()
{
    cout << "(" << fPhanThuc;
    if (fPhanAo >= 0)
    {
        cout << "+" << fPhanAo << "i)" << endl;
    }
    else
    {
        cout << fPhanAo << "i)" << endl;
    }
}

void SoPhuc::Cong(SoPhuc sophuc)
{
    fPhanThuc += sophuc.fPhanThuc;
    fPhanAo += sophuc.fPhanAo;
}

void SoPhuc::Tru(SoPhuc sophuc)
{
    fPhanThuc -= sophuc.fPhanThuc;
    fPhanAo -= sophuc.fPhanAo;
}

void SoPhuc::Nhan(SoPhuc sophuc)
{
    fPhanThuc = (fPhanThuc * sophuc.fPhanThuc) - (fPhanAo * sophuc.fPhanAo);
    fPhanAo = (fPhanThuc * sophuc.fPhanAo) + (fPhanThuc * sophuc.fPhanAo);
}

void SoPhuc::Chia(SoPhuc sophuc)
{
    fPhanThuc = (fPhanThuc * sophuc.fPhanThuc + fPhanAo * sophuc.fPhanAo) / (pow(fPhanAo, 2) + pow(sophuc.fPhanAo, 2));
    fPhanThuc = (fPhanAo * sophuc.fPhanThuc + fPhanThuc * sophuc.fPhanAo) / (pow(fPhanAo, 2) + pow(sophuc.fPhanAo, 2));
}
