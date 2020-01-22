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
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v.pb(mp(a,b));
        }
        string s="";
        ll flag=0;
        ll t1=0,t2=0;
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            ll a=v[i].first;
            ll b=v[i].second;
            if(a<t1 || b<t2)
            {
                cout<<"NO";
                cout<<endl;
                flag=1;
                break;
            }
            for(ll j=0;j<a-t1;j++)
                s=s+'R';
            for(ll j=0;j<b-t2;j++)
                s=s+'U';
            t1=a;
            t2=b;

        }
        if(flag)
            continue;
        cout<<"YES"<<endl<<s<<endl;
        continue;
    }
}
