#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=1;
    vector<int>v(10);
    while(n)
    {
        int a=n%10;
        for(int i=1;i<=a;i++)
        {
            v[i]+=t;
        }
        t*=10;
        n/=10;
    }
    int c=0;
    for(int i=1;i<10;i++)
        c++;
    cout<<c<<endl;
    for(int i=1;i<10;i++)
        if(v[i])
            cout<<v[i]<<" ";
    return 0;
}
