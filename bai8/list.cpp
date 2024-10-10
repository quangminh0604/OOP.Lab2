#include "list.h"
#include <iostream>

using namespace std;

// Constructor khởi tạo list rỗng
List::List() : arr(nullptr), size(0) {}

// Destructor giải phóng bộ nhớ động
List::~List() {
    delete[] arr;
}

// Hàm thay đổi kích thước mảng
void List::resize(unsigned int newSize) {
    double* newArr = new double[newSize];
    for (unsigned int i = 0; i < size && i < newSize; ++i) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size = newSize;
}

// Hàm thêm phần tử vào cuối list
void List::push(double value) {
    resize(size + 1);
    arr[size - 1] = value;
}

// Hàm xóa phần tử đầu tiên có giá trị bằng value
void List::pop_first(double value) {
    for (unsigned int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            for (unsigned int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            resize(size - 1);
            return;
        }
    }
}

// Hàm xóa tất cả các phần tử có giá trị bằng value
void List::pop_all(double value) {
    unsigned int i = 0;
    while (i < size) {
        if (arr[i] == value) {
            for (unsigned int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            resize(size - 1);
        } else {
            ++i;
        }
    }
}

// Hàm thay đổi giá trị tại vị trí index thành value mới
void List::replace(unsigned int index, double value) {
    if (index < size) {
        arr[index] = value;
    }
}

// Hàm in danh sách các phần tử
void List::print() const {
    cout << "[";
    for (unsigned int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

