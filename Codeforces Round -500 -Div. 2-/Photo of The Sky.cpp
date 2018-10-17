#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long *arr=new long long[2*n];
    for(long long i=0;i<2*n;i++)
        cin>>arr[i];
    sort(arr,arr+2*n);
    long long mini=(arr[n-1]-arr[0]) * (arr[2*n-1]-arr[n]);
    for(long long i=1;i<n;i++)
        mini=min(mini,(arr[2*n-1]-arr[0]) * (arr[n+i-1]-arr[i]));
    cout<<mini;
    return 0;
}
