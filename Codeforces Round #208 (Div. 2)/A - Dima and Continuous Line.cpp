#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        v.pb(arr[i]);
        if(i<3)
            continue;
        sort(v.begin(),v.end());
        ll a=-1,b=-1;
        for(ll j=0;j<v.size();j++)
        {
            if(v[j]==arr[i])
                a=j;
            if(v[j]==arr[i-1])
                b=j;
            if(a>-1 && b>-1 && abs(a-b)>1)
            {
                if((a==0 && b==v.size()-1) || (b==0 && a==v.size()-1))
                    continue;
                cout<<"yes";
                return 0;
            }
        }
    }
    cout<<"no";
}
