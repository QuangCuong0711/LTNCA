#include<bits/stdc++.h>
using namespace std;
int main() {
    for (int a = 0; a < 24; a++) {
        if (a == 0){
            cout << "12 midnight"<< endl;
        }
        else if (a < 12){
            cout << a << "am"<< endl;
        }
        else if (a == 12){
            cout << "12 noon"<< endl;
        }
        else{
            cout << a - 12 << "pm"<< endl;
        }
    }
}

