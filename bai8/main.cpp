
#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List list;
    int n;

    while (true) {
        cout << "Nhập chỉ thị n (-1 để thoát): ";
        cin >> n;

        if (n == -1) {
            break;  // Thoát vòng lặp và kết thúc chương trình
        } else if (n == 0) {
            double x;
            cout << "Nhập giá trị x để thêm vào list: ";
            cin >> x;
            list.push(x);
        } else if (n == 1) {
            double x;
            cout << "Nhập giá trị x để xóa phần tử đầu tiên có giá trị này: ";
            cin >> x;
            list.pop_first(x);
        } else if (n == 2) {
            double x;
            cout << "Nhập giá trị x để xóa tất cả phần tử có giá trị này: ";
            cin >> x;
            list.pop_all(x);
        } else if (n == 3) {
            unsigned int x;
            double y;
            cout << "Nhập chỉ số x và giá trị y để thay thế: ";
            cin >> x >> y;
            list.replace(x, y);
        } else {
            cout << "Chỉ thị không hợp lệ!" << endl;
        }
    }

    // In ra list hiện tại
    list.print();

    return 0;
}

