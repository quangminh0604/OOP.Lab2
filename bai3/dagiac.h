
// dagiac.h
#ifndef DAGIAC_H
#define DAGIAC_H

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

class DaGiac {
private:
    int n;      // Số đỉnh
    Diem *Dinh; // Mảng động các đỉnh

public:
    DaGiac();
    ~DaGiac();

    void Nhap();
    void Xuat();
    void TinhTien(float dx, float dy);
    void PhongTo(float heSo);
    void ThuNho(float heSo);
    void Quay(float goc);
};

#endif
