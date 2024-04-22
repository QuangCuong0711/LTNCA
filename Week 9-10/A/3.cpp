#include <bits/stdc++.h>
using namespace std;


int main(){
    char* a = new char[10];// khai báo và cấp phát cho mảng động a
    char* c = a + 3; // khai báo con trỏ c trỏ đến vị trí thứ 4 của mảng a
    for (int i = 0; i < 9; i++) a[i] = 'a';// gán giá trị 'a' cho các phần tử thuộc mảng a từ 1-9
    a[9] = '\0';//phần tử thứ 10 là phần tử kết thúc
    cerr <<"a: " << "-" << a << "-" << endl;// in ra mảng a
    cerr <<"c: " << "-" << c << "-" << endl;// in ra giá trị của con trỏ c 
    delete c; // Lỗi : giải phóng ô nhớ mà con trỏ đang trỏ vào là 1 phần của mảng a
    cerr << "a after deleting c:" << "-" << a << "-" << endl;// Lỗi : Do mảng a đã bị giải phóng 1 phần dẫn đến lỗi không xác định được 


}
