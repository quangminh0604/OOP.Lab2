// main.cpp
#include "Diem.h"

int main() {
    // Create a point using the default constructor
    Diem d1;
    d1.Xuat();

    // Create a point using the parameterized constructor
    Diem d2(3, 4);
    d2.Xuat();

    // Get and set methods
    cout << "Hoanh do cua d2: " << d2.GetHoanhDo() << endl;
    cout << "Tung do cua d2: " << d2.GetTungDo() << endl;

    d2.SetHoanhDo(10);
    d2.SetTungDo(20);
    cout << "Toa do cua d2 sau khi set: ";
    d2.Xuat();

    // Translation
    d2.TinhTien(5, -2);
    cout << "Toa do cua d2 sau khi tinh tien: ";
    d2.Xuat();

    return 0;
}

