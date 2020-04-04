#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 998244353
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
    ll n,w,h;
    scanf("%lld%lld%lld",&n,&w,&h);
    ll ans[n],width[n],height[n];
    vector<pair<pair<ll,ll>,ll > >p;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        p.pb(mp(mp(a,b),i+1));
    }
    sort(p.begin(),p.end());
    ll backtrack[n];
    ll index[n];
    for(ll i=0;i<n;i++)
    {
        width[i] = p[i].first.first;
        height[i] = p[i].first.second;
        index[i] = p[i].second;
    }
    ll maxi = 0;
    for(ll i=0;i<n;i++)
    {
        ans[i] = 0;
        backtrack[i] = -1;
        if(width[i] > w && height[i] > h)
            ans[i] = 1;
        for(ll j=0;j<i;j++)
        {
            if(width[i] > width[j] && width[i] > w && height[i] > h && height[i] > height[j])
            {
                if(ans[i] < ans[j]+1)
                {
                    ans[i] = ans[j]+1;
                    backtrack[i] = j;
                }
            }
        }
    }
    backtrack[0] = -1;
    maxi = 0;
    ll j = 0;
    for(ll i=0;i<n;i++)
    {
        if(ans[i]>maxi)
        {
            maxi = ans[i];
            j = i;
        }
    }
    if(maxi == 0)
    {
        cout<<0<<endl;
        return 0;
    }
    stack<ll>st;
    st.push(index[j]);
    j = backtrack[j];
    while(j != -1)
    {
        st.push(index[j]);
        j = backtrack[j];
    }
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
