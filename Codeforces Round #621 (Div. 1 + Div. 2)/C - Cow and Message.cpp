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
    string s;
    cin>>s;
    ll n=s.size();
    vector<ll>arr1(26);
    vector<vector<ll> >arr2(26,vector<ll>(26,0));
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<26;j++)
        {
            arr2[j][s[i]-'a']+=arr1[j];
            ans=max(ans,arr2[j][s[i]-'a']);
        }
        arr1[s[i]-'a']++;
        ans=max(ans,arr1[s[i]-'a']);
    }
    cout<<ans;
}
