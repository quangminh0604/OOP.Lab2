
#include <iostream>
#include <cmath>  // Để sử dụng các hàm lượng giác như cos, sin
#include "tamgiac.h"

using namespace std;

// Constructor khởi tạo với tọa độ 3 điểm
TamGiac::TamGiac(double x1, double y1, double x2, double y2, double x3, double y3) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->x3 = x3;
    this->y3 = y3;
}

// Hàm tịnh tiến tam giác theo hướng và độ dài
void TamGiac::tinh_tien(double huong, double do_dai) {
    // Chuyển độ sang radian
    double radian = huong * M_PI / 180.0;
    double dx = do_dai * cos(radian);  // Tính độ dịch chuyển theo trục x
    double dy = do_dai * sin(radian);  // Tính độ dịch chuyển theo trục y

    // Tịnh tiến các điểm của tam giác
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
    x3 += dx;
    y3 += dy;
}

// Hàm in ra thông tin tọa độ của tam giác
void TamGiac::hien_thi() {
    cout << "Tọa độ sau khi tịnh tiến:\n";
    cout << "(" << x1 << ", " << y1 << ")\n";
    cout << "(" << x2 << ", " << y2 << ")\n";
    cout << "(" << x3 << ", " << y3 << ")\n";
}
