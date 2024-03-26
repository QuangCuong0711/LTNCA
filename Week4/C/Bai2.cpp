#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int A[n];
    int max=-100;
    int min =100;
    int d=0,s=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
        if(A[i]%2==0) s+=A[i];
        else d++;
    }
    cout<< max<< " "<< min<<" "<< s<<" "<<d;
}