#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int cost=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(i+1<n && a[i]==b[i+1] && a[i+1]==b[i])
            {
                swap(a[i],a[i+1]);
                cost+=1;
            }
            else
            {
                cost++;
                if(a[i]=='0')
                    a[i]='1';
                else
                    a[i]='0';
            }
        }
    }
    cout<<cost;
    return 0;
}
