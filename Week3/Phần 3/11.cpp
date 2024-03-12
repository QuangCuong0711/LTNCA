#include <bits/stdc++.h>
using namespace std;

struct String {
    int n;
    char *str;
    String(const char* s){
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }
    void print() const {
        cout << str;
    }
    void append(const char* s) {
        int new_len=n+strlen(s);
        char *temp =new char[new_len+1];
        strcpy(temp,str);
        strcat(temp,s);
        delete[] str;
        str=temp;
        n=new_len;
    }
};

int main() {
    String greeting("Hi");
    greeting.print();
    greeting.append(" there");
    cout << endl;
    greeting.print();
    return 0;
}

