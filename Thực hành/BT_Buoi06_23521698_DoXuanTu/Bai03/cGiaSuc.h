#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
class cGiaSuc
{

public:
    cGiaSuc() {};
    ~cGiaSuc() {};
    virtual void Keu() = 0;
    virtual int Sua() = 0;
    virtual int SinhCon() = 0;
    virtual int getLoai() = 0;
};

