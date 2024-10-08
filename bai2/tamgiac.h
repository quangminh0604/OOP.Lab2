// tamgiac.h
#ifndef TAMGIAC_H
#define TAMGIAC_H

#include <iostream>
using namespace std;

class Diem {
public:
    float x, y;

    Diem();
    Diem(float xVal, float yVal);

    void Nhap();
    void Xuat();
    void TinhTien(float dx, float dy);
    void Quay(float goc);
};

class TamGiac {
private:
    Diem A, B, C;

public:
    TamGiac();
    TamGiac(Diem d1, Diem d2, Diem d3);

    void Nhap();
    void Xuat();
    void TinhTien(float dx, float dy);
    void PhongTo(float heSo);
    void ThuNho(float heSo);
    void Quay(float goc);
};

#endif

