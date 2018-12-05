#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    long long k;
    cin>>k;
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long long j=0,sum=0;
    for(long long i=0;i<k;i++)
    {
        if(j>=n)
        {
            cout<<0<<endl;
            continue;
        }
        if(arr[j]-sum==0)
        {
            j++;
            i--;
            continue;
        }
       cout<<arr[j]-sum<<endl;
        sum+=arr[j]-sum;
        j++;
    }
    return 0;
}
