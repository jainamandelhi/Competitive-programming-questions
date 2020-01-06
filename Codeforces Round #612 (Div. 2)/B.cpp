#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
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
    ll n,k;
    cin>>n>>k;
    set<string>s;
    vector<string>v;
    for(ll i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        v.pb(s1);
        s.insert(s1);
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            string temp="";
            for(ll p=0;p<k;p++)
            {
                if(v[i][p]==v[j][p])
                {
                    char a=v[i][p];
                    temp+=a;
                }
                else
                {
                    if(v[i][p]=='S' && v[j][p]=='T')
                        temp+='E';
                    if(v[i][p]=='T' && v[j][p]=='S')
                        temp+='E';
                    if(v[i][p]=='S' && v[j][p]=='E')
                        temp+='T';
                    if(v[i][p]=='E' && v[j][p]=='S')
                        temp+='T';
                    if(v[i][p]=='T' && v[j][p]=='E')
                        temp+='S';
                    if(v[i][p]=='E' && v[j][p]=='T')
                        temp+='S';
                }
            }
            //cout<<temp<<" ";
            if(s.find(temp)!=s.end())
                    ans++;
        }
    }
    cout<<ans/3;
}
