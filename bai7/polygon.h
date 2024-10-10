#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
using namespace std;

class Polygon {
private:
    int n;  // Số đỉnh của đa giác
    vector<double> x;  // Tọa độ hoành độ của các đỉnh
    vector<double> y;  // Tọa độ tung độ của các đỉnh

public:
    // Constructor khởi tạo đa giác với số đỉnh n và các tọa độ đỉnh
    Polygon(int n);

    // Hàm nhập tọa độ các đỉnh của đa giác
    void nhap_toa_do();

    // Hàm tính diện tích của đa giác
    double tinh_dien_tich();

    // Hàm hiển thị diện tích
    void hien_thi_dien_tich();
};

#endif

