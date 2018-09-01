#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0;
    cin>>n;
    vector<pair<int,int> >p;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        p.push_back(make_pair(x,y));
    }
    for(int i=0;i<n;i++)
    {
        int a=0,b=0,c=0,d=0;
        for(int j=0;j<n;j++)
        {
            if(p[i].first==p[j].first && p[i].second<p[j].second)
                a=1;
            else if(p[i].first==p[j].first && p[i].second>p[j].second)
                b=1;
            else if(p[i].first>p[j].first && p[i].second==p[j].second)
                c=1;
            else if(p[i].first<p[j].first && p[i].second==p[j].second)
                d=1;
        }
        if(a && b && c && d)
            count1++;
    }
    cout<<count1;
    return 0;
}
