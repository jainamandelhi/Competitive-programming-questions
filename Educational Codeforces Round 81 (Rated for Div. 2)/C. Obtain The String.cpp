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
        ll n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
                sum++;
            else
                sum--;
        }
        ll ans=0,curr=0,flag=1;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
                curr--;
            else
                curr++;
            if(sum==0 && x==curr)
            {
                cout<<-1<<endl;
                flag=0;
                break;
            }
            ll temp=x-curr;
            if(temp<=0 && sum<0 && abs(temp)%abs(sum)==0)
                ans++;
            if(temp>=0 && sum>0 && abs(temp)%abs(sum)==0)
                ans++;
        }
        if(flag==0)
            continue;
        if(x==0)
            ans++;
        cout<<ans<<endl;
    }
}
