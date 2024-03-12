#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x,y;
};
struct Rect {
    int x,y,w,h;
};
struct Ship {
    Rect a;
    double vx,vy;
    string id;
    void move() {
        a.x+=vx;
        a.y+=vy;
    }
};
void display(const Ship &a) {
    cout<< a.id<<" "<<a.a.x<<" "<<a.a.y;
}
int main() {
    // Thêm code
    return 0;
}
