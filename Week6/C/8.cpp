#include <bits/stdc++.h>
using namespace std;
using namespace std;
int ceilfloor(double x)
{
    double n=ceil(x)-x;
    if(n<=x-floor(x)) return ceil(x);
    return floor(x);
}

int notceilfloor(double x)
{
    double n=x-(int)x;
    if(n<0.5) return (int)x;
    return (int)x+1;
}

int main()
{
    double n;
    cin >> n;
    cout << ceilfloor(n) << endl;
    cout << notceilfloor(n) << endl;
    return 0;
}