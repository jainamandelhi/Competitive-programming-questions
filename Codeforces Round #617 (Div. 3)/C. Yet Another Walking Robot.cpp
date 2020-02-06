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
        map<pair<ll,ll>,ll>m;
        m[mp(0,0)]=0;
        ll x=0,y=0,temp=0;
        ll ansx=-1,ansy=-1,maxi=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='L')
                x--;
            else if(s[i]=='R')
                x++;
            else if(s[i]=='U')
                y++;
            else
                y--;
            temp++;
            pair<ll,ll>p=mp(x,y);
            if(m.find(p)!=m.end())
            {
                if(temp-m[p]<maxi)
                {
                    maxi=temp-m[p];
                    ansx=m[p]+1;
                    ansy=temp;
                }
            }
            m[p]=temp;
        }
        if(ansx==-1)
            cout<<ansx;
        else
            cout<<ansx<<" "<<ansy;
        cout<<endl;
    }
}
