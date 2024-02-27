#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=0;
  cin >>n;
  for(int i=n;i>=1;i--){
    for(int x=n-i;x>0;x--) cout << " ";
    for(int y=2*i-1;y>0;y--) cout<< "*";
    for(int z=n-i;z>0;z--) cout << " ";
    cout<< endl;
  }
}