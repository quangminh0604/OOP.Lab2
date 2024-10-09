#include <iostream>
#include "tamgiac.h"

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    double huong, do_dai;

    // Nhập tọa độ của 3 điểm tam giác
    cout << "Nhập tọa độ của 3 điểm tam giác (x1, y1, x2, y2, x3, y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Nhập hướng tịnh tiến và độ dài tịnh tiến
    cout << "Nhập hướng tịnh tiến (độ): ";
    cin >> huong;
    cout << "Nhập độ dài tịnh tiến: ";
    cin >> do_dai;

    // Tạo đối tượng tam giác
    TamGiac tg(x1, y1, x2, y2, x3, y3);

    // Tịnh tiến tam giác theo hướng và độ dài
    tg.tinh_tien(huong, do_dai);

    // Xuất ra tọa độ của tam giác sau khi tịnh tiến
    tg.hien_thi();

    return 0;
}
