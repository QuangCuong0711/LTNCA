#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int  age;
    string  Ho;
    string  Ten;
    int  lop;
    void  print() {
        cout<<age<< " "<<Ho<<" "<< Ten<< " "<< lop;
    }
};
int main() {
    Student A;
    cin>>A.age>>A.Ho>>A.Ten>>A.lop;
    A.print();
    return 0;
}
