#ifndef LIST_H
#define LIST_H

class List {
private:
    double* arr;       // Con trỏ quản lý mảng
    unsigned int size; // Kích thước của list

    // Hàm trợ giúp để thay đổi kích thước mảng
    void resize(unsigned int newSize);

public:
    // Constructor khởi tạo list rỗng
    List();

    // Destructor giải phóng bộ nhớ động
    ~List();

    // Hàm thêm phần tử vào cuối list
    void push(double value);

    // Hàm xóa phần tử đầu tiên có giá trị bằng value
    void pop_first(double value);

    // Hàm xóa tất cả các phần tử có giá trị bằng value
    void pop_all(double value);

    // Hàm thay đổi giá trị tại vị trí index thành value mới
    void replace(unsigned int index, double value);

    // Hàm in danh sách các phần tử
    void print() const;
};

#endif

