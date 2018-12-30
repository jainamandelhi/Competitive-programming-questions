#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int main()
{
    ll t;
    t=1;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll> >v(n+1);
        for(int i=1;i<=n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[i].pb(a),v[i].pb(b);
        }
        vector<ll>ans(n+1);
        //vector<ll>visited(n+1);
        ans[1]=1;
        ll i=1,f=1;
        while(1)
        {
            if(f==n-1 && n%2==0)
            {
                if(v[i][0]==1)
                    ans[n]=v[i][1];
                else
                    ans[n]=v[i][0];
            }
            if(f==n)
                break;
            if(ans[f+1]==0)
            {
                ans[f+1]=v[i][0];
                ans[f+2]=v[i][1];
                i=ans[f+1];
                f++;
            }
            else
            {
                if(v[i][0]==ans[f+1] || v[i][1]==ans[f+1])
                {
                    f++;
                    i=ans[f];
                    continue;
                }
                swap(ans[f],ans[f+1]);
                f++;
                i=ans[f];
            }
        }
        for(i=3;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<ans[1]<<" "<<ans[2];
    }
    return 0;
}
