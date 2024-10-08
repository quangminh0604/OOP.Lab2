// main.cpp
#include "tamgiac.h"

int main() {
    TamGiac tg;
    tg.Nhap();
    cout << "Tam giac ban dau:\n";
    tg.Xuat();

    cout << "\nTinh tien tam giac theo vector (3, 4):\n";
    tg.TinhTien(3, 4);
    tg.Xuat();

    cout << "\nPhong to tam giac voi he so 2:\n";
    tg.PhongTo(2);
    tg.Xuat();

    cout << "\nThu nho tam giac voi he so 2:\n";
    tg.ThuNho(2);
    tg.Xuat();

    cout << "\nQuay tam giac theo goc 90 do:\n";
    tg.Quay(90);
    tg.Xuat();

    return 0;
}
