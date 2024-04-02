#include <bits/stdc++.h>
using namespace std;
int khoitao(int n)
{
    int x=rand()%n;
    return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<khoitao(n);
}
