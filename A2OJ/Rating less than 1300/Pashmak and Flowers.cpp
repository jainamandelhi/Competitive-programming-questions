#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long *arr=new long long[n];
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(arr[0]==arr[n-1])
    {
        cout<<0<<" "<<(n*(n-1))/2;
        return 0;
    }
    long long a=0,b=0;
    for(long long i=0;i<n;i++)
    {
        if(arr[i]==arr[0])
            a++;
        if(arr[n-1]==arr[i])
            b++;
    }
    cout<<arr[n-1]-arr[0]<<" "<<a*b;
    return 0;
}
