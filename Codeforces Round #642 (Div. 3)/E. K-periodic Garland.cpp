/* Isn't passion overrated? */

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
        ll n,k;
        cin>>n;
        cin>>k;
        string s;
        cin>>s;
        vector<vector<ll> >arr(n,vector<ll>(2));
        vector<ll>cnt(n);
        for(ll i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(s[i] == '1')
                    cnt[i] = 1;
                continue;
            }
            cnt[i] = cnt[i-1];
            cnt[i] += (s[i] == '1');
        }
        for(ll i = 0; i < n; i++)
        {
            if(i == 0)
            {
                arr[i][0] = (s[i] == '1');
                arr[i][1] = (s[i] == '0');
                continue;
            }
            if(s[i] == '0')
            {
                arr[i][0] = min(arr[i-1][0],arr[i-1][1]);
                ll a = cnt[i-1];
                ll b = arr[max(i-k,0ll)][1] + cnt[i-1];
                if(i >= k)
                    b -= cnt[i-k];
                arr[i][1] = min(a,b) + 1;
            }
            else
            {
                arr[i][0] = min(arr[i-1][0],arr[i-1][1]) + 1;
                ll a = cnt[i-1];
                ll b = arr[max(i-k,0ll)][1] + cnt[i-1];
                if(i >= k)
                    b -= cnt[i-k];
                arr[i][1] = min(a,b);
            }
        }
        cout<<min(arr[n-1][0],arr[n-1][1])<<endl;
    }
    return 0;
}
