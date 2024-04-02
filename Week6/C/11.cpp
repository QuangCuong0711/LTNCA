#include <bits/stdc++.h>
using namespace std;
long long int decbin(int n){
    long long int a=0;
    while(n!=0){
        a=a*10;
        int x= n%2;
        a=a+x;
        n=n/2;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    cout<< decbin(n);
}
