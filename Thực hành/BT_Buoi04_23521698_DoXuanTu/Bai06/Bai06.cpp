// Bai06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "CVector.h"
#include "CMatrix.h"
int main()
{
	CVector A, B;
	cout << "Nhap vector A: ";
	cin >> A;
	cout << A << endl;
	cout << "Nhap vector B: ";
	cin >> B;
	cout << B << endl;
	cout << "A + B = " << A + B;
	cout << "A - B = " << A - B << endl;
	cout << "Tich vo huong cua vector A va vector B bang : " << A * B << endl;
	cout << "Do dai cua vector A: " << (A || A) << endl;
	cout << "Do dai cua vector B: " << (B || B) << endl;
	cout << "__________________________________________________" << endl;
	cout << "\nMa Tran: " << endl;
	CMatrix M, N;
	cin >> M;
	cout << M;
	cin >> N;
	cout << N;
	cout << "Ma tran M + Ma tran N = " << M + N << endl;
	cout << "Ma tran M - Ma tran N = " << M - N << endl;
	cout << "Ma tran M * Ma tran N = " << M * N << endl;
	cout << "Ma tran M * Vector A  = " << M * A << endl;

}

