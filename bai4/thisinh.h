
// thisinh.h
#ifndef THISINH_H
#define THISINH_H

#include <iostream>
#include <string>
using namespace std;

class ThiSinh {
private:
    string Ten;
    string MSSV;
    int iNgay, iThang, iNam;
    float fToan, fVan, fAnh;

public:
    ThiSinh();
    void Nhap();
    void Xuat();
    float Tong();
};

#endif
