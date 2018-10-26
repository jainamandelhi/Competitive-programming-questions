#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    for(float i=1;i<=n;i++)
    {
        for(float j=i;j<=n;j++)
        {
           if(i*i+j*j<=n*n && int(sqrt(i*i+j*j))==sqrt(i*i+j*j))
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
