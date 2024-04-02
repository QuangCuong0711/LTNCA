#include <bits/stdc++.h>
using namespace std;
void print(int n,int m){
    for(int i=1;i<=n;i++){
        cout<< " ";
    }
    for(int i=1;i<=m;i++){
        cout<< "*";
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        print((2*n-2*i+1)/2,2*i-1);
        print((2*n-2*i+1)/2,0);
        cout<< endl;
    }
}
