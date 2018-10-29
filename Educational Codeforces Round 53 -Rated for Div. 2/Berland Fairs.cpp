#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long ans=0;
    int n;
    long long t;
    cin>>n>>t;
    long long total=0;
    long long arr[n];
    long long mini =LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        total+=arr[i];
        mini = min(arr[i],mini);
    }
    ans = ((t/total)*n);
    t = t%total;
    while(t >= mini)
    {
        vector<long long>v;
        total=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=t)
            {
                v.push_back(arr[i]);
                total+=arr[i];
            }
        }
        if(total<=t)
        {
            ans+=((t/total)*(v.size()));
            t=t%total;
        }
        else
        {
           for(int i=0;i<v.size();i++)
           {
                if(v[i]<=t)
                {
                    t-=v[i];
                    ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}
