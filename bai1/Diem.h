
// Diem.h

#include <iostream>
using namespace std;

class Diem {
private:
    int iHoanh;
    int iTung;

public:
    // Constructors
    Diem();  // Default constructor
    Diem(int Hoanh, int Tung);  // Parameterized constructor
    Diem(const Diem &x);  // Copy constructor

    // Display method
    void Xuat();

    // Getter methods
    int GetHoanhDo();
    int GetTungDo();

    // Setter methods
    void SetHoanhDo(int Hoanh);
    void SetTungDo(int Tung);

    // Translation method
    void TinhTien(int dX, int dY);
};

