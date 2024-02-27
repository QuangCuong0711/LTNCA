#include<bits/stdc++.h>
using namespace std;
void in(int x,int n){
    for(int i=x;i<=n;i++){
        cout<< i<<" ";
    }
}
int main(){
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       in(i,n);
       in(1,i-1);
       cout<< endl;
   }
}