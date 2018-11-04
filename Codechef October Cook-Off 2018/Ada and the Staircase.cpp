#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,cnt=0;
        cin>>n>>k;
        int arr[n];
        for(long long i=0;i<n;i++)
            cin>>arr[i];
        for(long long i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]>k)
            {
                long double a=arr[i+1]-arr[i];
                a/=k;
                if(a==floor(a))
                    cnt+=floor(a)-1;
                else
                    cnt+=floor(a);
            }
        }
        if(arr[0]>k)
        {
            long double a=arr[0];
            a/=k;
            if(a==floor(a))
                cnt+=floor(a)-1;
            else
                cnt+=floor(a);
        }
        cout<<cnt<<endl;
    }
}
