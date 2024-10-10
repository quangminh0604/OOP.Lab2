#include <iostream>
#include "polygon.h"

using namespace std;

int main() {
    int n;

    // Nhập số lượng đỉnh của đa giác
    cout << "Nhập số đỉnh của đa giác: ";
    cin >> n;

    // Tạo đối tượng Polygon với số đỉnh n
    Polygon polygon(n);

    // Nhập tọa độ của các đỉnh
    polygon.nhap_toa_do();

    // Hiển thị diện tích của đa giác
    polygon.hien_thi_dien_tich();

    return 0;
}

