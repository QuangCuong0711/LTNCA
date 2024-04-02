#include <bits/stdc++.h>
using namespace std;
int check(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else{
        int a=0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0)a++;
        }
        if(a==0) return 1;
        else return 0;
    }
}
int main()
{
    int n; cin>>n;
    cout<<check(n)<<endl;
    for(int i=1;i<=n;i++){
        if(check(i)) cout<< i <<" ";
    }
}
