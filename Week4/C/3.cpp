#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    vector<int> A;
    while(n!=0) {
        int x=0;
        x=n%10;
        n=n/10;
        A.push_back(x);
    }
    int a=A.size();
    for(int i=0;i<a/2;i++){
        if(A[i]!=A[a-1-i]) return false;
    }
    return true;
}
int main() {
    int a,b,n=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(check(i)) n++;
    }
    cout<<n;

}
