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
    ll flag=0,flag1=0;
    for(ll i=0;i<n-1;i++)
    {
        if(!flag && s[i]=='A' && s[i+1]=='B')
        {
            flag=1;
            i++;
            continue;
        }
        if(flag && s[i]=='B' && s[i+1]=='A')
        {
            flag1=1;
            break;
        }
    }
    if(flag && flag1)
    {
        cout<<"YES";
        return 0;
    }
    flag=0,flag1=0;
    for(ll i=0;i<n-1;i++)
    {
        if(!flag && s[i]=='B' && s[i+1]=='A')
        {
            flag=1;
            i++;
            continue;
        }
        if(flag && s[i]=='A' && s[i+1]=='B')
        {
            flag1=1;
            break;
        }
    }
    if(flag && flag1)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}
