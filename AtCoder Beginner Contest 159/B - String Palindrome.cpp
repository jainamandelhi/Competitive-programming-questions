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
    ll n = s.size();
    ll flag = 0;
    ll j = n-1;
    j/=2;
    j--;
    ll k = j;
    for(ll i=0;i<=j;i++)
    {
        if(s[i] != s[k])
        {
            flag = 1;
            break;
        }
        k--;
    }
    if(flag)
    {
        cout<<"No";
        return 0;
    }
    flag = 0;
    j = n+3;
    j /= 2;
    j--;
    k = n-1;
    for(ll i=j;i<n;i++)
    {
        if(s[i] != s[k])
        {
            flag = 1;
            break;
        }
        k--;
    }
    if(flag)
    {
        cout<<"No";
        return 0;
    }
    flag = 0;
    ll i = 0;
    j = n-1;
    while(i<=j)
    {
        if(s[i] != s[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if(flag)
    {
        cout<<"No";
        return 0;
    }
    cout<<"Yes";
}
