// Bai06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cString.h"

int main()
{
    cString S1, Noi, DaoNguoc, ChuThuong, ChuHoa;
    char* S2;
    S1.NhapChuoi();
    S1.XuatChuoi();
    int section;
    do {
        cout << "_______________" << endl;
        cout << "1. Xuat chieu dai chuoi." << endl;
        cout << "2. Noi hai chuoi." << endl;
        cout << "3. Dao chuoi." << endl;
        cout << "4. Doi chuoi thanh chu thuong." << endl;
        cout << "5. Doi chuoi thanh chu hoa." << endl;
        cout << "Nhap 0 de thoat!" << endl;
        cin >> section;
        cin.ignore();
        switch (section)
        {
        case 1:
            cout << "Chieu dai cua chuoi la : " << S1.length() << endl;
            break;
        case 2:
            Noi = S1;
            cout << "Nhap chuoi: ";
            char temp[100];
            cin.getline(temp,100);
            S2 = new char[strlen(temp) + 1];
            strcpy_s(S2, strlen(temp) + 1, temp);
            Noi.NoiHaiChuoi(S2);
            Noi.XuatChuoi();
            break;
        case 3:
            DaoNguoc = S1;
            DaoNguoc.DaoNguocChuoi();
            DaoNguoc.XuatChuoi();
            break;
        case 4:
            ChuThuong = S1;
            ChuThuong.toLower();
            ChuThuong.XuatChuoi();
            break;
        case 5:
            ChuHoa = S1;
            ChuHoa.toUpper();
            ChuHoa.XuatChuoi();
            break;
        default:
            break;
        }
    } while (section != 0);
    return 0;
}

