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
vector<ll>ans;
ll dp[2002][2002];
bool f(ll i,ll k,ll dp[][2002], ll n,vector<string>&arr,vector<string>&temp)
{
    if(k < 0)
        return 0;
    if(n == i)
        return (k == 0);
    if(dp[i][k] != -1)
        return dp[i][k];
    dp[i][k] = 0;
    for(ll t = 9; t >= 0; t--)
    {
        ll temp1 = 0;
        ll p = 1;
        for(ll j = 0; j < 7; j++)
        {
            if(temp[i][j] == '1' && arr[t][j] == '0')
            {
                p = 0;
                break;
            }
            if(temp[i][j] == '0' && arr[t][j] == '1'){
                temp1++;
            }
        }
        if(p)
            dp[i][k] |= f(i+1,k-temp1,dp,n,arr,temp);
        if(dp[i][k] == 1)
        {
            ans[i] = t;
            return 1;
        }
    }
    return 0;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<string>arr(10);
	arr[0] = "1110111";
    arr[1] = "0010010";
    arr[2] = "1011101";
    arr[3] = "1011011";
    arr[4] = "0111010";
    arr[5] = "1101011";
    arr[6] = "1101111";
    arr[7] = "1010010";
    arr[8] = "1111111";
    arr[9] = "1111011";
    ll n,k;
    cin >>n>>k;
    ans = vector<ll>(n);
    vector<string>temp;
    for(ll i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        temp.pb(s);
    }
    memset(dp,-1,sizeof(dp));
    if(f(0,k,dp,n,arr,temp) == 0)
    {
        cout<<-1;
        return 0;
    }
    for(int i = 0; i < n; ++i)
    {
        cout<<ans[i];
    }
    return 0;
}
