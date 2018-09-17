#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,total=0;
    cin>>n>>a>>b;
    if(n-a-1>b)
    {
        cout<<b+1;
        return 0;
    }
    for(int i=a+1;i<=n;i++)
        total++;
    cout<<total;
}
