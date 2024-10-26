// Bai01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cSoPhuc.h"

int main()
{
    cSoPhuc A, B;
    cout << "Nhap so phuc thu nhat : " << endl;
    cin >> A;
    cout << A;
    cout << "Nhap so phuc thu hai : " << endl;
    cin >> B;
    cout << B;
    cout << "Tong = " << A + B;
    cout << "Hieu = " << A - B;
    cout << "Tich = " << A * B;
    cout << "Thuong = " << A / B;
    if (A == B)
        cout << "Hai so phuc bang nhau." << endl;
    else if (A != B)
        cout << "Hai so phuc khong bang nhau" << endl;

}
