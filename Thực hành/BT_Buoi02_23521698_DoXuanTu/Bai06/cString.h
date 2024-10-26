#pragma once
#define _CRT_SECURE_NO_WARNING
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
class cString
{
private: 
	char* String;
public:
    cString() {
        String = nullptr;
    }
    cString(const char* s) {
        int length = strlen(s);
        String = new char[length + 1];
        strcpy_s(String,length + 1,s);
    }
    int length();
    void NhapChuoi();
    void XuatChuoi();
    void NoiHaiChuoi(const char *s);
    void DaoNguocChuoi();
    void toUpper();
    void toLower();
    ~cString() {
        delete[] String;
    }

};

