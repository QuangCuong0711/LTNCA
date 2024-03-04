#include<bits/stdc++.h>
using namespace std;
int main(){
	int b=0;
	int a,i=2;
	cin>>a;
	while(i){
		int c;
		cin >> c;
		if(c>a){
			b++;
		}
		else if(a<c){ b--; }
		else;
		a=c;
		i--;
	}
	if(b!=2 && b!=-2 ) cout<< boolalpha<<false;
	else cout<< boolalpha<< true;
}


