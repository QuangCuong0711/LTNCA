#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int a;
    cin>>a;
    for(int i=0;i<n;i++){
        if(a!=i) cout<< A[i]<<" ";
    }
}