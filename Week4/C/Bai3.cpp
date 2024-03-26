#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    int A[10];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A[x]++;
    }
    for(int i=0;i<10;i++){
        cout<< i <<" "<< A[i]<<endl;
    }
}
