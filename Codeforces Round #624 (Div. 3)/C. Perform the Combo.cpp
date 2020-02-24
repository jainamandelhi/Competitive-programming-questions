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
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<vector<ll> >arr(n,vector<ll>(26));
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<26;j++)
            {
                if(i==0)
                    break;
                arr[i][j]=arr[i-1][j];
            }
            arr[i][s[i]-'a']++;
        }
        vector<ll>ans(26);
        for(ll i=0;i<m;i++)
        {
            ll a;
            cin>>a;
            a--;
            for(ll j=0;j<26;j++)
            {
                ans[j]+=arr[a][j];
            }
        }
        for(ll i=0;i<26;i++)
        {
            ans[i]+=arr[n-1][i];
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
