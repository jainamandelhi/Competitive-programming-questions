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
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans=ans*10+(s[i]-'0');
        if(ans%8==0)
        {
            cout<<"YES"<<endl;
            cout<<ans;
            return 0;
        }
        for(ll j=i+1;j<n;j++)
        {
            ans=ans*10+(s[j]-'0');
            if(ans%8==0)
            {
                cout<<"YES"<<endl;
                cout<<ans;
                return 0;
            }
            for(ll k=j+1;k<n;k++)
            {
                ll ans1=ans*10+(s[k]-'0');
                if(ans1%8==0)
                {
                    cout<<"YES"<<endl;
                    cout<<ans1;
                    return 0;
                }
            }
            ans/=10;
        }
        ans/=10;
    }
    cout<<"NO";
}
