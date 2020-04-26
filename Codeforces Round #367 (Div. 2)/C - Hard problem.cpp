#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000000000000007
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
    ll n;
    cin>>n;
    vector<ll>cost(n);
    for(ll i = 0; i < n; i++)
        cin>>cost[i];
    vector<string>s;
    for(ll i = 0; i < n; i++)
    {
        string a;
        cin>>a;
        s.pb(a);
    }
    vector<vector<ll> >v(n,vector<ll>(2));
    v[0][0] = 0;
    v[0][1] = cost[0];
    for(ll i = 1; i < n; i++)
    {
        string prev = s[i-1];
        string prev_rev = prev;
        reverse(prev_rev.begin(),prev_rev.end());
        string curr = s[i];
        string curr_rev = curr;
        reverse(curr_rev.begin(),curr_rev.end());
        ll cost1 = mod;
        if(prev <= curr)
            cost1 = v[i-1][0];
        if(prev_rev <= curr)
            cost1 = min(cost1,v[i-1][1]);
        v[i][0] = cost1;
        cost1 = mod;
        if(prev <= curr_rev)
            cost1 = min(cost1,v[i-1][0]+cost[i]);
        if(prev_rev <= curr_rev)
            cost1 = min(cost1,v[i-1][1]+cost[i]);
        v[i][1] = cost1;
        if(v[i][0] == mod && v[i][1] == mod)
        {
            cout<<-1;
            return 0;
        }
    }
    /*for(ll i = 0; i < n; i++)
        cout<<v[i][0]<<" "<<v[i][1]<<endl;*/
    cout<<min(v[n-1][0],v[n-1][1]);
    return 0;
}
