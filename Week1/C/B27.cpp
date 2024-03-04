#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int a;
        cin>>a;
        if(a>0){
            if(a%5==0){
                cout<< a/5<<endl;
            }
            else cout<< -1<<endl;
        }
        else if(a==-1){
            break;
        }
        else cout<< -1<<endl;
    }
}

