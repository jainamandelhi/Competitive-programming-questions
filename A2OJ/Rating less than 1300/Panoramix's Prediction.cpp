#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    n++;
    while(n<=m)
    {
        for(int i=2;i<=m-1;i++)
        {
            if(n%i==0)
                break;
            if(n!=m&&i==n-1)
            {
                cout<<"NO";
                return 0;
            }
            if(n==m&&i==m-1)
            {
                cout<<"YES";
                return 0;
            }
        }
        n++;
    }
    cout<<"NO";
    return 0;
}
