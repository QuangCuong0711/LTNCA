#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x,y;
};
struct Rect {
    int x,y,w,h;
    Rect(int _x,int _y,int _w,int _h) {
        x=_x;
        y=_y;
        w=_w;
        h=_h;
    }
    Rect(){
        x=0;
        y=0;
        w=0;
        h=0;
    }

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
void display(Ship a) {
    cout<< a.id<<" "<<a.a.x<<" "<<a.a.y<<endl;
}
int main() {
    Ship s1;
    Ship s2;
    s1.id ="UET";
    s2.id="ULIS";
    s1.vx=3;
    s1.vy=4;
    s2.vx=6;
    s2.vy=8;
    Rect n(0,0,40,10);
    Rect p(50,0,50,10);
    s1.a=n;
    s2.a=p;
    int i=10;
    while(i){
        s1.move();
        s2.move();
        display(s1);
        display(s2);
        i--;
    }
}