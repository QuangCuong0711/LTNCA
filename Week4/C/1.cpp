#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int B[n+1];
    int A[n];
    for(int i=0;i<n;i++){
        cin>> A[i];
        B[A[i]]++;
        if(B[A[i]]==2) return true;
    }
    return false;
}
int main() {
    int n;
    cin>>n;
    if(check(n)) cout<< "True";
    else cout<< "Flase";
}

