#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x,y;
};
struct Rect {
    int x,y,w,h;
    bool contains( const Point &p) {
        if(p.x>=x && p.x<=x+h && y<=p.y && p.y<=y+w) cout<< boolalpha<<true;
        else cout<< boolalpha<< false;
    }

};
int main() {
    Point point ;
    point.x =10;
    point.y =20;
    Rect hcn;
    hcn.x=0;
    hcn.y=0;
    hcn.w=800;
    hcn.h=600;
    hcn.contains(point);
    return 0;
}