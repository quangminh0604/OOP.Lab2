#include <iostream>
using namespace std;

// Hàm nhập tọa độ ban đầu của điểm
class Diem {
private:
    int x, y;
public: 
    Diem(){}
    void nhap_diem() {
        cout << "Nhập hoành độ: ";
        cin >> x;
        cout << "Nhập tung độ: ";
        cin >> y;
    }
    void xu_ly_chi_thi() {
        int n;
        cout << "Nhập số lượng chỉ thị: ";
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            int chi_thi;
            cout << "Nhập chỉ thị x: ";
            cin >> chi_thi;
            
            if (chi_thi == 1) {
                // Nhân đôi tung độ và hoành độ
                x *= 2;
                y *= 2;
            } else if (chi_thi == 2) {
                // Gán điểm về gốc tọa độ
                x = 0;
                y = 0;
            } else if (chi_thi == 3) {
                // Tịnh tiến điểm
                int k;
                double d;
                cout << "Nhập hướng tịnh tiến (k = 0: trục x, k khác 0: trục y): ";
                cin >> k;
                cout << "Nhập độ tịnh tiến d: ";
                cin >> d;
                if (k == 0) {
                    x += d;
                } else {
                    y += d;
                }
            } else {
                // Không làm gì nếu chỉ thị không hợp lệ
                cout << "Chỉ thị không hợp lệ, bỏ qua.\n";
            }
        }
        cout << "Tọa độ cuối cùng của điểm là: (" << x << ", " << y << ")\n";  // In ra kết quả cuối cùng
    }
    
};


// Hàm xử lý các chỉ thị


// Chương trình chính
int main() {
    Diem d1;
    d1.nhap_diem();  // Nhập điểm ban đầu
    d1.xu_ly_chi_thi();  // Xử lý các chỉ thị
    
    
    return 0;
}
