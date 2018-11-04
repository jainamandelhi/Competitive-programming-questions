#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
        cout<<1;
        return 0;
    }
    long long d=arr[0];
    vector<long long>v;
    vector<long long>v1;
    v.push_back(arr[0]);
    for(long long i=1;i<n;i++)
        v.push_back(arr[i]-arr[i-1]);
    for(long long j=1;j<=n;j++)
    {
        int flag=0;
        for(long long k=0;k<n;k++)
        {
            if(v[k]!=v[k%j])
                flag=1;
        }
        if(flag==0)
            v1.push_back(j);
    }
    cout<<v1.size()<<endl;
    for(int j=0;j<v1.size();j++)
        cout<<v1[j]<<" ";
    return 0;
   // cout<<1<<endl;
   // cout<<n;
}
