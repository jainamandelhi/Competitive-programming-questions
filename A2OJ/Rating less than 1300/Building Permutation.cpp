#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++)
        cin>>arr[i];
        long long sum=0;
    sort(arr.begin(),arr.end());
    for(long long i=n-1;i>=0;i--)
    {
        sum+=abs(i+1-arr[i]);
    }
    cout<<sum;
}
