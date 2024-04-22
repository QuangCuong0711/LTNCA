#include <bits/stdc++.h>
using namespace std;


int main(){
    int* p = new int;// khởi tạo con trỏ p và cấp phát bộ nhớ động cho nó
    int* p2 = p;// khởi tạo con trỏ p2 cùng trỏ tới địa chỉ của p
    *p = 10;// gán giá trị 10 cho vùng nhớ mà p và p2 trỏ tới
    delete p;// giải phóng vùng nhớ mà p và p2 trỏ tới
    *p2 = 100;// Lỗi : cố truy cập vùng nhớ đã được giải phóng
    cout << *p2;// Không đoán được
    delete p2;// Lỗi : cố gắng giải phóng vùng nhớ đã được giải phóng

}
