#define pb push_back
#define mp make_pair
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    vector<int>ans;
    vector<int>v(n+1);
    for(ll i=2;i<=sqrt(n);i++)
    {
        ll j=2;
        while(1)
        {
            if(j*i>n)
                break;
            v[j*i]++;
            j++;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(v[i]!=0)
            continue;
        ll k=1;
        ll a=pow(i,k);
        while(a<=n)
        {
                ans.pb(a);
            k++;
            a=pow(i,k);
        }
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
