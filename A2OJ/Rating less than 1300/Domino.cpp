#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int of=0,os=0,flag=0;
    vector<pair<int,int> >p(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        p.push_back(make_pair(a,b));
        if(a%2!=0)
            of++;
        if(b%2!=0)
            os++;
        if(a%2!=b%2)
            flag=1;
    }
    if(of%2 && os%2 && flag)
        cout<<1;
    else if(of%2==0 && os%2==0)
        cout<<0;
    else
        cout<<-1;
    return 0;
}
