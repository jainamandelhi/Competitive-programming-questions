#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    float a=sum/(t);
    cout<<a;
return 0;
}
