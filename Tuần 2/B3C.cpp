#include<bits/stdc++.h>
using namespace std;
void printRow(int m, int n){
    for(int i=1;i<=m/2;i++) cout<< " ";
    for(int i=1;i<=n;i++) cout<< "*";
    for(int i=1;i<=m/2;i++) cout<< " ";
    cout<< endl;
}
int main(){
  int n=0;
  cin >>n;
  for(int i=1;i<=n;i++){
    printRow(2*n - 2*i,2*i-1);
  }
}
