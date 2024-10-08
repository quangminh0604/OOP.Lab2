// main.cpp
#include "thisinh.h"

int main() {
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;

    ThiSinh* thiSinhs = new ThiSinh[n];

    // Nhập thông tin cho n thí sinh
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin cho thi sinh " << i + 1 << ":\n";
        thiSinhs[i].Nhap();
    }

    cout << "\nDanh sach thi sinh co tong diem lon hon 15:\n";
    for (int i = 0; i < n; i++) {
        if (thiSinhs[i].Tong() > 15) {
            thiSinhs[i].Xuat();
            cout << "Tong diem: " << thiSinhs[i].Tong() << endl;
            cout << "--------------------" << endl;
        }
    }

    // Tìm thí sinh có điểm cao nhất
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (thiSinhs[i].Tong() > thiSinhs[maxIndex].Tong()) {
            maxIndex = i;
        }
    }

    cout << "\nThi sinh co diem cao nhat:\n";
    thiSinhs[maxIndex].Xuat();
    cout << "Tong diem: " << thiSinhs[maxIndex].Tong() << endl;

    delete[] thiSinhs; // Giải phóng bộ nhớ
    return 0;
}

