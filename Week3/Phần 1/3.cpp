#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x,y;
};
void printmid( const Point &p1, const Point &p2 ) {
    cout<< (p1.x+p2.x)*1.0/2 << " "<< (p1.y+p2.y)*1.0/2 <<endl;
}
int main() {
    Point p1,p2 ;
    p1.x=10;
    p1.y=12;
    p2.x=15;
    p2.y=18;
    printmid(p1,p2);
    return 0;
}

