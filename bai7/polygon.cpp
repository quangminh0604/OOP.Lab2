
#include <iostream>
#include <cmath>
#include "polygon.h"

using namespace std;

// Constructor khởi tạo đa giác với số đỉnh n
Polygon::Polygon(int n) {
    this->n = n;
    x.resize(n);
    y.resize(n);
}

// Hàm nhập tọa độ các đỉnh của đa giác
void Polygon::nhap_toa_do() {
    for (int i = 0; i < n; ++i) {
        cout << "Nhập tọa độ điểm " << i + 1 << " (x, y): ";
        cin >> x[i] >> y[i];
    }
}

// Hàm tính diện tích của đa giác sử dụng Shoelace formula
double Polygon::tinh_dien_tich() {
    double area = 0;

    for (int i = 0; i < n - 1; ++i) {
        area += x[i] * y[i + 1] - x[i + 1] * y[i];
    }

    // Tính toán cho cạnh cuối cùng nối với điểm đầu
    area += x[n - 1] * y[0] - x[0] * y[n - 1];

    return fabs(area) / 2.0;
}

// Hàm hiển thị diện tích của đa giác
void Polygon::hien_thi_dien_tich() {
    double area = tinh_dien_tich();
    cout << "Diện tích của đa giác là: " << area << endl;
}
