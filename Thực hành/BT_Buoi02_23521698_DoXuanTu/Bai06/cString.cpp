#include "cString.h"

int cString::length() {
    return strlen(String);
}
void cString::NhapChuoi() {
    char input[100];
    cout << "Nhap chuoi: ";
    cin.getline(input, sizeof(input));

    int length = strlen(input);
    String = new char[length + 1];
    strcpy_s(String,length + 1, input);
}
void cString::XuatChuoi() {
    cout << "chuoi: ";
    int i = 0;
    while (String[i] != '\0') {
        cout << String[i++];
    }
    cout << endl;
}

void cString::NoiHaiChuoi(const char* s) {
    int old_length = strlen(String);
    int new_length = old_length + strlen(s);
    char* new_str = new char[new_length + 1];
    strcpy_s(new_str, old_length + 1, String);
    strcat_s(new_str, new_length + 1, s);
   
    new_str[new_length + 1] = '\0';
    delete[] String;
    String = new_str;
}

void cString::DaoNguocChuoi() {
    int len = length();
    for (int i = 0; i < len / 2; i++) {
        char temp = String[i];
        String[i] = String[len - i - 1];
        String[len - i - 1] = temp;
    }
}
void cString::toUpper() {
    int len = length();
    for (int i = 0; i < len; i++) {
        String[i] = toupper(String[i]);
    }
}
void cString::toLower() {
    int len = length();
    for (int i = 0; i < len; i++) {
        String[i] = tolower(String[i]);
    }
}
