
#ifndef TAMGIAC_H
#define TAMGIAC_H

class TamGiac {
private:
    double x1, y1, x2, y2, x3, y3;

public:
    // Constructor khởi tạo với tọa độ 3 điểm
    TamGiac(double x1, double y1, double x2, double y2, double x3, double y3);

    // Hàm tịnh tiến tam giác theo hướng và độ dài
    void tinh_tien(double huong, double do_dai);

    // Hàm in ra thông tin tọa độ của tam giác
    void hien_thi();
};

#endif
