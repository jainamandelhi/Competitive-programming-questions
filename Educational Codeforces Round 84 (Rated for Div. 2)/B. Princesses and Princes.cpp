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
        vector<vector<ll> >arr1(n);
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            for(ll j=0;j<a;j++)
            {
                ll k;
                cin>>k;
                arr1[i].pb(k);
            }
        }
        set<ll>s;
        ll ans = 0;
        vector<ll>temp;
        for(ll i=0;i<n;i++)
        {
            ll flag = 0;
            for(ll j=0;j<arr1[i].size();j++)
            {
                ll a = arr1[i][j];
                if(s.find(a) == s.end())
                {
                    flag = 1;
                    s.insert(a);
                    ans++;
                }
                if(flag)
                    break;
            }
            if(flag)
                continue;
            temp.pb(i);
        }
        ll flag = 0;
        if(temp.size() == 0)
        {
            cout<<"OPTIMAL"<<endl;
            continue;
        }
        ll u = 1;
        while(u<=n && s.find(u) != s.end())
            u++;
        if(u == n+1)
        {
            cout<<"OPTIMAL"<<endl;
            continue;
        }
        else
        {
            cout<<"IMPROVE"<<endl;
            cout<<temp[0]+1<<" "<<u<<endl;
        }
    }
}
