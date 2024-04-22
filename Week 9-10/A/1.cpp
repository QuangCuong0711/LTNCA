#include <bits/stdc++.h>
using namespace std;

char * concat(const char* a, const char*  b){
    int x = strlen(a) + strlen(b);

    char * res  = new char [ x + 1 ];

    strcpy(res, a);
    strcat(res, b);

    return res;
}
int main(){
    const char* a = "Hello ";
    const char* b = "World";

    char* re = concat(a, b);
    cout<<re<<endl;

    delete[] re;
}
