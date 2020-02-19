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
vector<vector<ll> >v;
vector<ll>arr;
ll n,a,b,c;
void f(ll i,vector<ll>arr1,ll sum)
{
    //cout<<n<<" "<<a<<" "<<b<<" "<<c<<endl;
    //cout<<sum<<endl;

    if(i==n)
        return;
    arr1.pb(arr[i]);
    sum+=arr[i];
    f(i+1,arr1,sum);
    if(sum>=a && sum<=b)
    {
        //cout<<-1<<endl;
        v.pb(arr1);
    }
    sum-=arr[i];
    arr1.pop_back();
    f(i+1,arr1,sum);
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin>>n>>a>>b>>c;
    for(ll i=0;i<n;i++)
    {
        ll h;
        cin>>h;
        arr.pb(h);
    }
    ll ans=0;
    vector<ll>arr1;
    f(0ll,arr1,0ll);
    for(ll i=0;i<v.size();i++)
    {
        sort(v[i].begin(),v[i].end());
       // for(ll j=0;j<v[i].size();j++)
       //     cout<<v[i][j]<<" ";
       // cout<<endl;
        if(v[i][v[i].size()-1]-v[i][0]>=c)
            ans++;
    }
    cout<<ans;
}
