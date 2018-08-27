#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=1,mini,maxi,count1=0;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if(flag)
        {
            mini=t;
            maxi=t;
            flag=0;
        }
        else
        {
            if(t<mini)
            {
                count1++;
                mini=t;
            }
            if(t>maxi)
            {
                count1++;
                maxi=t;
            }
        }
    }
    cout<<count1;
}
