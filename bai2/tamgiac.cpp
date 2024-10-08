// tamgiac.cpp
#include "tamgiac.h"
#include <cmath>

// Định nghĩa lớp Diem
Diem::Diem() {
    x = 0;
    y = 0;
}

Diem::Diem(float xVal, float yVal) {
    x = xVal;
    y = yVal;
}

void Diem::Nhap() {
    cout << "Nhap toa do (x, y): ";
    cin >> x >> y;
}

void Diem::Xuat() {
    cout << "(" << x << ", " << y << ")";
}

void Diem::TinhTien(float dx, float dy) {
    x += dx;
    y += dy;
}

void Diem::Quay(float goc) {
    float rad = goc * M_PI / 180;
    float xMoi = x * cos(rad) - y * sin(rad);
    float yMoi = x * sin(rad) + y * cos(rad);
    x = xMoi;
    y = yMoi;
}

// Định nghĩa lớp TamGiac
TamGiac::TamGiac() {}

TamGiac::TamGiac(Diem d1, Diem d2, Diem d3) {
    A = d1;
    B = d2;
    C = d3;
}

void TamGiac::Nhap() {
    cout << "Nhap toa do diem A:\n";
    A.Nhap();
    cout << "Nhap toa do diem B:\n";
    B.Nhap();
    cout << "Nhap toa do diem C:\n";
    C.Nhap();
}

void TamGiac::Xuat() {
    cout << "Toa do diem A: ";
    A.Xuat();
    cout << "\nToa do diem B: ";
    B.Xuat();
    cout << "\nToa do diem C: ";
    C.Xuat();
    cout << endl;
}

void TamGiac::TinhTien(float dx, float dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void TamGiac::PhongTo(float heSo) {
    A.x *= heSo;
    A.y *= heSo;
    B.x *= heSo;
    B.y *= heSo;
    C.x *= heSo;
    C.y *= heSo;
}

void TamGiac::ThuNho(float heSo) {
    if (heSo == 0) {
        cout << "He so thu nho phai khac 0!";
        return;
    }
    A.x /= heSo;
    A.y /= heSo;
    B.x /= heSo;
    B.y /= heSo;
    C.x /= heSo;
    C.y /= heSo;
}

void TamGiac::Quay(float goc) {
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
}

