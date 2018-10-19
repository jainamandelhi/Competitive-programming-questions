#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long *arr=new long long[n];
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    int maxi=-1;
    for(long long i=0;i<n;i++)
    {
        if(arr[i]>maxi+1 || arr[i]>i)
        {
            cout<<i+1;
            return 0;
        }
        if(arr[i]>maxi)
            maxi=arr[i];
    }
    cout<<-1;
    return 0;
}
