// dagiac.cpp
#include "dagiac.h"
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

// Định nghĩa lớp DaGiac
DaGiac::DaGiac() {
    n = 0;
    Dinh = nullptr;
}

DaGiac::~DaGiac() {
    delete[] Dinh;
}

void DaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    Dinh = new Diem[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do dinh thu " << i + 1 << ":\n";
        Dinh[i].Nhap();
    }
}

void DaGiac::Xuat() {
    for (int i = 0; i < n; i++) {
        cout << "Dinh " << i + 1 << ": ";
        Dinh[i].Xuat();
        cout << endl;
    }
}

void DaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < n; i++) {
        Dinh[i].TinhTien(dx, dy);
    }
}

void DaGiac::PhongTo(float heSo) {
    for (int i = 0; i < n; i++) {
        Dinh[i].x *= heSo;
        Dinh[i].y *= heSo;
    }
}

void DaGiac::ThuNho(float heSo) {
    if (heSo == 0) {
        cout << "He so thu nho phai khac 0!";
        return;
    }
    for (int i = 0; i < n; i++) {
        Dinh[i].x /= heSo;
        Dinh[i].y /= heSo;
    }
}

void DaGiac::Quay(float goc) {
    for (int i = 0; i < n; i++) {
        Dinh[i].Quay(goc);
    }
}

