#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x,y;
};
void print( Point p ) {
    cout<< p.x<< " "<< p.y <<endl;
}
int main() {
    Point point ;
    point.x =10;
    point.y =20;
    cout<< &(point.y)<<endl<<&(point.x)<<endl<< &point;
    return 0;
}
// Kết quả cho thấy địa chỉ của point lấy theo địa chỉ của point.x 
// Địa chỉ của biến x và y khác nhau , biến x được lưu trước

