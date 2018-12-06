#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,m;
    cin>>n>>m;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    cout<<arr[0]/m<<" ";
    long long nl=m-arr[0]%m;
    n--;
    long long i=1;
    while(n--)
    {
        if(arr[i]<nl)
        {
            cout<<0<<" ";
            nl=nl-arr[i];
            continue;
        }
        else
        {
            if(nl==0)
                cout<<(arr[i]-nl)/m<<" ";
            else
                cout<<(arr[i]-nl)/m +1 <<" ";
            nl=m-(arr[i]-nl)%m;
        }
        i++;
    }
    return 0;
}
