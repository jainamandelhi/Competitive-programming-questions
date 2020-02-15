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
        ll n,currtemp;
        cin>>n>>currtemp;
        ll mini=currtemp;
        ll maxi=mini;
        ll flag=0;
        ll currtime=0;
        for(ll i=0;i<n;i++)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            ll temp=a-currtime;
            currtime=a;
            ll mini1,maxi1;
            if(b<=mini && c<=maxi && c>=mini)
            {
                mini=max(mini-temp,b);
                maxi=c;
            }
            else if(b<=mini && c>=maxi)
            {
                mini=max(b,mini-temp);
                maxi=min(maxi+temp,c);
            }
            else if(b>=mini && c<=maxi)
            {
                mini=b;
                maxi=c;
            }
            else if(b>=mini && c>=maxi && b<=maxi)
            {
                mini=b;
                maxi=min(maxi+temp,c);
            }
            else if(mini>=c)
            {
                //cout<<mini<<" "<<maxi<<" "<<temp<<endl;
                ll mini1=mini;
                mini=max(mini-temp,b);
                maxi=max(mini1-temp,c);
            }
            else
            {
                ll mini1=mini;
                mini=min(maxi+temp,b);
                maxi=min(maxi+temp,c);
            }
           // cout<<mini<<" "<<maxi<<endl;
            if(mini>=b && maxi<=c)
                continue;
            else
            {
                flag=1;
            }
        }
        if(flag)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
}
