
// Diem.cpp
#include "Diem.h"

// Default constructor
Diem::Diem() {
    iHoanh = 0;
    iTung = 0;
}

// Parameterized constructor
Diem::Diem(int Hoanh, int Tung) {
    iHoanh = Hoanh;
    iTung = Tung;
}

// Copy constructor
Diem::Diem(const Diem &x) {
    iHoanh = x.iHoanh;
    iTung = x.iTung;
}

// Display the point's coordinates
void Diem::Xuat() {
    cout << "(" << iHoanh << ", " << iTung << ")" << endl;
}

// Getter methods
int Diem::GetHoanhDo() {
    return iHoanh;
}

int Diem::GetTungDo() {
    return iTung;
}

// Setter methods
void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

// Translation method
void Diem::TinhTien(int dX, int dY) {
    iHoanh += dX;
    iTung += dY;
}

