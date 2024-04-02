#include <bits/stdc++.h>
using namespace std;
int gcd(int n,int m){
    int a=0;
    for(int i=1;i<=m;i++){
        if(n%i==0 and m%i==0) a=i;
    }
    return a;
}
int main()
{
    int m,n;
    cin>>n>>m;
    cout<< gcd(n,m);
}
