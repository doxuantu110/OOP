// Bai02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cPhanSo.h"

int main()
{
    cPhanSo A, B;
    cout << "Nhap phan so 1 : " << endl;
    cin >> A;
    cout << "Nhap phan so 2 : " << endl;
    cin >> B;
    cout << A << " + " << B << " = " << (A + B) << endl;
    cout << A << " - " << B << " = " << (A - B) << endl;
    cout << A << " * " << B << " = " << (A * B) << endl;
    cout << A << " / " << B << " = " << (A / B) << endl;
    if (A == B)
        cout << "Hai phan so bang nhau. " << endl;
    else if (A < B)
        cout << "Phan so 1 nho hon Phan so 2. " << endl;
    else
        cout << "Phan so 1 lon hon Phan so 2. " << endl;
    
}

