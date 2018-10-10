/*
Aur doobna hai ya koodna zaruri tha?
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n+1;i++)
    {
        for(int p=2*abs(n-i);p>0;p--)
            cout<<" ";
        int k,r=i;
        for(int j=0;j<=r;j++)
        {
            if(r>n)
            {
                r=n-(r-n);
                k=r;
            }
            else
                k=j;
            if(r==0)
            {
                cout<<0;
                break;
            }
            cout<<j<<" ";
        }
        for(k=k-1;k>=0;k--)
        {
            if(k==0)
                cout<<k;
            else
                cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
