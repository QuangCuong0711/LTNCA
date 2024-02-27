#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b=0;
    vector<int> A;
    while(cin>>a and b==0){
        if(a<0) b++;
        A.push_back(a);
    }
    int x=A.size();
    for (int i=0;i<x-1;i++){
        if(A[i]==A[i+1]) A[i]=0;
    }
    for (int i=0;i<x;i++){
        if(A[i]!=0) cout<<A[i]<< " ";
    }
}