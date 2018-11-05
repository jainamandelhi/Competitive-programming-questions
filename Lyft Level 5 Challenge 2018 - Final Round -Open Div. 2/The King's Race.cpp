#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long x,y;
    cin>>x>>y;
    long long dw,db;
    if(x<y)
    {
        dw=x-1+y-x;
        db=n-y+y-x;
    }
    else
    {
        dw=y-1+x-y;
        db=n-x+x-y;
    }
    if(db<dw)
        cout<<"Black";
    else
        cout<<"White";
}
