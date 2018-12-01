#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    map<long long,long long>m;
    long long arr[n],sum=0;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        m[arr[i]]++;
    }
    vector<long long>p;
    for(long long i=0;i<n;i++)
    {
        long long sum1=sum;
        sum1-=arr[i];
        if(sum1%2!=0)
            continue;
        sum1/=2;
        if(m.find(sum1)!=m.end())
        {
            if(arr[i]==sum1 && m[sum1]==1)
                continue;
            p.push_back(i+1);
        }
    }
    cout<<p.size()<<endl;
    for(long long i=0;i<p.size();i++)
    {
        cout<<p[i]<<" ";
    }
}
