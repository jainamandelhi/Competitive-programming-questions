#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;

int main()
{
    double n,k,m,sum=0,ans=0;
    cin>>n>>k>>m;
    vector<double>arr(n);
    vector<double>vis(n);
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    double i=n-1;
    while(1)
    {
        if(i==-1)
            break;
        sum+=arr[i];
        if(m>=i)
            ans=max(ans,(sum+min(k*(n-i),m-i))/(n-i));
        i--;
    }
    cout<<setprecision(15)<<ans;
    return 0;
}
