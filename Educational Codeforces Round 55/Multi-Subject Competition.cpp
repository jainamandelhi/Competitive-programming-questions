#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,flag=0;
    cin>>n>>m;
    vector<vector<long long> >v(m+1);
    for(long long i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    for(long long i=0;i<m+1;i++)
    {
        sort(v[i].rbegin(),v[i].rend());
    }
    long long maxi=0;
    for(long long i=0;i<m+1;i++)
    {
        for(long long j=1;j<v[i].size();j++)
            v[i][j]+=v[i][j-1];
        if(v[i].size()>maxi)
            maxi=v[i].size();
    }
    vector<long long>p(maxi+1);
    long long t=0,sum=0;
    for(long long i=0;i<m+1;i++)
    {
        for(long long j=0;j<v[i].size();j++)
        {
            if(v[i][j]<0)
                break;
            p[j]+=v[i][j];
        }
    }
    sort(p.rbegin(),p.rend());
    cout<<p[0];
}
