#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    vector<long long>arr1(n);
    arr1[0]=arr[0];
    for(long long i=1;i<n;i++)
    {
        arr1[i]+=arr1[i-1]+arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<long long>arr2(n);
    arr2[0]=arr[0];
    for(long long i=1;i<n;i++)
    {
        arr2[i]=arr2[i-1]+arr[i];
    }
    long long m;
    cin>>m;
    /*for(long long i=0;i<n;i++)
        cout<<arr1[i]<<" ";
        cout<<endl;
    for(long long i=0;i<n;i++)
        cout<<arr2[i]<<" ";*/
    /*for(long long i=0;i<=n;i++)
    {
        for(long long j=0;j<=n;j++)
        {
            cout<<arr1[3][4]<<" ";
        }
        cout<<endl;
    }*/
    for(long long i=0;i<m;i++)
    {
        long long a,b,c,e;
        cin>>a>>b>>c;
        if(a==1){
            if(b==1)
                 e=0;
            else
                 e=arr1[b-2];
            cout<<arr1[c-1]-e;
        }
        if(a==2){
            if(b==1)
                e=0;
            else
                e=arr2[b-2];
            cout<<arr2[c-1]-e;
        }
        cout<<endl;
    }
}
