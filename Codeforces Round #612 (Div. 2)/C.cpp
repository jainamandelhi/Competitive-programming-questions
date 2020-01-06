#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll dp[101][101][101][2];
ll odd,even;
ll func(ll i ,ll odd,ll even, ll arr[], ll val)
{
    if(i<0)
        return 0;
    if(dp[i][odd][even][val]!=-1)
        return dp[i][odd][even][val];
    ll ans=0;
    //int x=0,y=0;
    if(arr[i]!=0)
    {
        ans=ans+func(i-1,odd,even,arr,arr[i]%2)+!(arr[i]%2==val);
    }
    else
    {
        if(even>0 && odd>0){
            ll ans1=0,ans2=0;
            ans1=ans1+func(i-1,odd,even-1,arr,0)+!(0==val);
            ans2=ans2+func(i-1,odd-1,even,arr,1)+!(1==val);
            ans=ans+min(ans1,ans2);
        }
        else if(odd>0)
            ans=ans+func(i-1,odd-1,even,arr,1)+!(1==val);
        else
            ans=ans+func(i-1,odd,even-1,arr,0)+!(0==val);
    }
    return dp[i][odd][even][val]=ans;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    odd=(n+1)/2;
    even=n/2;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2 && arr[i])
            odd--;
        if(arr[i] && arr[i]%2==0)
            even--;
    }
    memset(dp,-1,sizeof(dp));
    cout<<min(func(n-1,odd,even,arr,1),func(n-1,odd,even,arr,0));
}
