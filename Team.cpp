#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>1)
            count1++;
    }
    cout<<count1;
    return 0;
}
