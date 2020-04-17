#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000007
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll v1[n],v2[n];
        for(ll i = 0; i < n; i++)
            cin>>v1[i]>>v2[i];
        ll index = 0;
        vector<pair<ll,ll> >p;
        for(ll i = 0; i < n; i++)
        {
            p.pb(mp(v1[(i+1)%n]-max(0ll,v1[(i+1)%n]-v2[i]),(i+1)%n));
        }
        sort(p.begin(),p.end());
        index = p[0].second;
        ll flag = 0;
        ll ans = 0;
        ll i = index;
        //cout<<i<<endl;
        while(i != index || !flag)
        {
            flag = 1;
            ans += v1[i];
            ll temp = v2[i];
            i ++;
            if(i == n)
                i = 0;
            while(temp >= v1[i] && i!= index)
            {
                temp = v2[i];
                i++;
                if(i == n)
                    i = 0;
            }
            if(i != index)
                v1[i] -= temp;
        }
        cout<<ans<<endl;
    }
}
