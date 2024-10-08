// main.cpp
#include "dagiac.h"

int main() {
    DaGiac dg;
    dg.Nhap();
    cout << "Da giac ban dau:\n";
    dg.Xuat();

    cout << "\nTinh tien da giac theo vector (3, 4):\n";
    dg.TinhTien(3, 4);
    dg.Xuat();

    cout << "\nPhong to da giac voi he so 2:\n";
    dg.PhongTo(2);
    dg.Xuat();

    cout << "\nThu nho da giac voi he so 2:\n";
    dg.ThuNho(2);
    dg.Xuat();

    cout << "\nQuay da giac theo goc 90 do:\n";
    dg.Quay(90);
    dg.Xuat();

    return 0;
}
