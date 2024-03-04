#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    double a,S=0;
    double x=10000,y=-10000;
    for(int i=1;i<=n;i++){
        cin >> a;
        S+=a;
        if(a>y) y=a;
        if(a<x) x=a;
    }

    cout<<S/n<<endl<< x<< endl<< y;
}

