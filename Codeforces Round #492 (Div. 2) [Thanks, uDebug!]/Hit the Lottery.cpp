#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int notes=0;
    while(n)
    {
        notes++;
        if(n>=100)
        n-=100;
        else if(n>=20)
        n-=20;
        else if(n>=10)
        n-=10;
        else if(n>=5)
        n-=5;
        else
        n-=1;
    }
        cout<<notes;
    return 0;
}
