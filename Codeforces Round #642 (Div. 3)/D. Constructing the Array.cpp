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
bool com(const pair<ll,pair<ll,ll> >&a,const pair<ll,pair<ll,ll> >&b){
    if(a.first != b.first)
        return a.first > b.first;
    return a.second.first < b.second.first;
    }
/*class com
{
    public:
    bool operator()(pair<ll,pair<ll,ll> >&a, pair<ll,pair<ll,ll> >&b){
    if(a.first != b.first)
        return a.first > b.first;
    return a.second.first < b.second.first;
    }
};*/
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
        queue<pair<ll,pair<ll,ll> > >q;
        vector<ll>ans(n);
        q.push(mp(n,mp(0,n-1)));
        ll k = 1;
        vector<pair<ll,pair<ll,ll> > >v;
        while(!q.empty())
        {
            ll fi = q.front().first;
            ll se_fi = q.front().second.first;
            ll se_se = q.front().second.second;
            v.pb(mp(fi,mp(se_fi,se_se)));
            //cout<<fi<<" "<<se_fi<<" "<<se_se<<endl;
            q.pop();
            ll mid;
            if((se_se-se_fi+1) % 2)
                mid = (se_se+se_fi)/2;
            else
                mid = (se_se+se_fi-1)/2;
            //ans[mid] = k++;
            if(mid - 1 >= se_fi)
                q.push(mp(mid-se_fi,mp(se_fi,mid-1)));
            if(mid + 1 <= se_se)
                q.push(mp(se_se-mid,mp(mid+1,se_se)));
        }
        sort(v.begin(),v.end(),com);
        for(ll i = 0; i < v.size(); i++)
        {
            ll fi = v[i].first;
            ll se_fi = v[i].second.first;
            ll se_se = v[i].second.second;
            ll mid;
            if((se_se-se_fi+1) % 2)
                mid = (se_se+se_fi)/2;
            else
                mid = (se_se+se_fi-1)/2;
            ans[mid] = k++;
        }
        for(ll i = 0; i < n; i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
