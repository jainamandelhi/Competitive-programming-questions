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
        string s;
        cin>>s;
        ll odd=0;
        string ans="";
        for(ll i=0;i<n;i++)
        {
            if((s[i]-'0')%2==1)
            {
                ans.pb(s[i]);
                odd++;
            }
            if(odd==2)
                break;
        }
        if(odd<2)
        {
            cout<<-1;
        }
        else
        {
            cout<<ans;
        }
        cout<<endl;
    }
}
