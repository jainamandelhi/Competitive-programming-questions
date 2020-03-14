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
    ll a,b;
    cin>>a>>b;
    vector<ll>ans;
    if(a==b)
    {
        if(a==0)
            cout<<0;
        else
        {
            cout<<1<<endl;
            cout<<a;
        }
        return 0;
    }
    //ans.pb(a);
    ll c=b-a;
    if(c%2 || c<0)
    {
        cout<<-1;
        return 0;
    }
    c/=2;
    //cout<<(a+c);
    if((a^c)==a+c)
    {
        ans.pb(a+c);
        ans.pb(c);
    }
    else
    {
        ans.pb(a);
        ans.pb(c);
        ans.pb(c);
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
