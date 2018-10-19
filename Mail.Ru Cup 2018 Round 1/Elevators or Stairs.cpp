#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,z,t1,t2,t3;
    cin>>x>>y>>z>>t1>>t2>>t3;
    long long te=0,ts=0;
    te+=(abs(z-x)+abs(y-x))*t2+3*t3;
    ts+=abs(x-y)*t1;
    if(te<=ts)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
