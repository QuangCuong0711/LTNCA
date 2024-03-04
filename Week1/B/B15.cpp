#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    a="a";
    b="b";
    int i=8;
    cout<< a<< endl<<b<< endl;
    while(i){
        c=b+a;
        cout<< c<< endl;
        a=b;
        b=c;
        i--;
    }
}
