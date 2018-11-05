#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    vector<pair<long long,long long> >p(n+m);
    long long arr[n+m],bin[n+m],a[m],k=0;
    for(long long i=0;i<n+m;i++)
        cin>>arr[i];
    for(long long i=0;i<n+m;i++)
        cin>>bin[i];
    for(long long i=0;i<n+m;i++)
    {
        p[i].first=arr[i];
        p[i].second=bin[i];
        if(bin[i]==1)
        {
            a[k]=arr[i];
            k++;
        }
    }
    long long v[m];
    for(long long i=0;i<m;i++)
        v[i]=0;
    k=-1;
    for(long long i=0;i<n+m;i++)
    {
        if(p[i].second==1)
        {
            k++;
        }
        else
        {
            if(k!=-1 && k+1<m && (abs(p[i].first-a[k+1])<abs(p[i].first-a[k])))
                v[k+1]++;
            else if(k!= -1 && k+1<m && (abs(p[i].first-a[k+1])>=abs(p[i].first-a[k])))
                v[k]++;
            else if(k==m-1)
                v[m-1]++;
            else if(k==-1)
            {
                v[0]++;
            }
        }
    }
    for(long long i=0;i<m;i++)
    {
        cout<<v[i]<<" ";
    }
}
