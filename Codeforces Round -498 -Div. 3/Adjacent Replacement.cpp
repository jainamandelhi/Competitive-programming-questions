#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long j;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        if(j%2!=0)
            cout<<j<<" ";
        else
            cout<<j-1<<" ";
    }
    return 0;
}
