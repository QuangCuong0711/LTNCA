#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=0;
  cin >>n;
  for(int i=n;i>=1;i--){
    for(int x=n-i;x>0;x--) cout<< " ";
    for(int x=i;x>0;x--) cout<< "*";
    cout<< endl;
  }
}