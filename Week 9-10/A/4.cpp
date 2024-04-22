#include <bits/stdc++.h>
using namespace std;


int main(){
    int x=0;
    int *a = new int;
    cout << *a << " " << x << " " << a << " " << &x << endl;
    a=&x;
    cout << *a << " " << x << " " << a << " " << &x << endl;
    delete[] a;
    cout << *a << " " << x << " " << a << " " << &x << endl;// máy không thể xác định được giá trị hay địa chỉ của cả con trỏ và biến
}
