/* Isn't passion overrated?*/

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
        ll arr[n];
        ll k;
        cin>>k;
        set<ll>s;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        set<ll>::iterator itr;
        vector<ll>v;
        ll maxi = 1, mini = n;
        for(itr = s.begin(); itr != s.end(); itr++)
        {
            v.pb(*itr);
            maxi = max(maxi,*itr);
            mini = min (mini,*itr);
        }
        ll temp = maxi;
        maxi++;
        while(s.size() < k && maxi <= n)
        {
            s.insert(maxi);
            v.pb(maxi);
            maxi++;
        }
        maxi = mini;
        maxi = 1;
        while(s.size() < k && maxi <= n)
        {
            if(s.find(maxi) != s.end())
            {
                maxi++;
                continue;
            }
            s.insert(maxi);
            v.pb(maxi);
            maxi++;
        }
        if(s.size() > k)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<n*v.size()<<endl;
        for(ll i = 1; i <= n; i++)
        {
            for(ll j = 0; j < v.size(); j++)
                cout<<v[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
