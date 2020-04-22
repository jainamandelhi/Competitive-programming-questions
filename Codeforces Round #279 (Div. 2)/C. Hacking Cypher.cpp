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
ll a,b;
string s;
bool convert(ll i)
{
    string s1 = s.substr(i+1,s.size()-i-1);
    ll n = 0;
    for(ll j = 0; j < s1.size(); j++)
    {
        n = n*10 + s1[j]-'0';
        n %= b;
    }
    return !(n%b);
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin>>s>>a>>b;
    ll no = 0;
    vector<ll>fr(s.size()),ba(s.size());
    fr[0] = s[0]-'0';
    fr[0] %= a;
    for(ll i = 1; i < s.size(); i++)
        fr[i] = (fr[i-1]*10+(s[i]-'0'))%a;
    ba[s.size()-1] = s[s.size()-1]-'0';
    ba[s.size()-1] %= b;
    ll cnt = 10;
    for(ll i = s.size()-2; i >= 0; i--)
    {
        ba[i] = ((s[i]-'0')*cnt+ba[i+1])%b;
        ba[i] %= b;
        cnt = cnt*10;
        cnt %= b;
    }
    for(ll i = s.size()-2; i >= 0; i--)
    {
        if(fr[i] == 0 && ba[i+1] == 0 && s[i+1] != '0')
        {
            //cout<<s[i]<<endl;
            cout<<"YES"<<endl;
            cout<<s.substr(0,i+1)<<endl;
            cout<<s.substr(i+1,s.size()-i-1);
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
