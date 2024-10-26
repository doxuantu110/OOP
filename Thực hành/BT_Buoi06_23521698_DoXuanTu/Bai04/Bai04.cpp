// Bai04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cKhachHang.h"
#include "cKhachHangA.h"
#include "cKhachHangB.h"
#include "cKhachHangC.h"
#include <vector>
int main() {
    ifstream inputFile("XYZ.INP");
    if (!inputFile) {
        cerr << "Khong the mo file XYZ.INP" << endl;
        return 1;
    }

    ofstream outputFile("XYZ.OUT");
    if (!outputFile) {
        cerr << "Khong the mo file XYZ.OUT" << endl;
        return 1;
    }

    int x, y, z;
    inputFile >> x >> y >> z;
    inputFile.ignore();

    if (inputFile.fail()) {
        cerr << "Loi khi doc so luong khach hang" << endl;
        return 1;
    }

    vector<cKhachHang*> DanhSachKhachHang;

    for (int i = 0; i < x; ++i) {
        string Ten;
        int SoLuong;
        float DonGia;
        getline(inputFile, Ten);
        inputFile >> SoLuong >> DonGia;
        inputFile.ignore();
        if (inputFile.fail()) {
            cerr << "Loi khi doc thong tin khach hang A" << endl;
            return 1;
        }
        DanhSachKhachHang.push_back(new cKhachHangA(Ten, SoLuong, DonGia));
    }
    for (int i = 0; i < y; ++i) {
        string Ten;
        int SoLuong, SoNamThanThiet;
        float DonGia;
        getline(inputFile, Ten);
        inputFile >> SoLuong >> DonGia >> SoNamThanThiet;
        inputFile.ignore();
        if (inputFile.fail()) {
            cerr << "Loi khi doc thong tin khach hang B" << endl;
            return 1;
        }
        DanhSachKhachHang.push_back(new cKhachHangB(Ten, SoLuong, DonGia, SoNamThanThiet));
    }

    for (int i = 0; i < z; ++i) {
        string Ten;
        int SoLuong;
        float DonGia;
        getline(inputFile, Ten);
        inputFile >> SoLuong >> DonGia;
        inputFile.ignore();
        if (inputFile.fail()) {
            cerr << "Loi khi doc thong tin khach hang C" << endl;
            return 1;
        }
        DanhSachKhachHang.push_back(new cKhachHangC(Ten, SoLuong, DonGia));
    }

    double TongSoTien = 0;
    outputFile << x << " " << y << " " << z << endl;
    for (cKhachHang* kh : DanhSachKhachHang) {
        kh->Xuat(outputFile);
        TongSoTien += kh->TinhTienPhaiTra();
        delete kh;
    }

    outputFile << TongSoTien << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}
