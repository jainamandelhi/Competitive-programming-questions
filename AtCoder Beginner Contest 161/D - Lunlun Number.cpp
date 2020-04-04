#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 998244353
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
    ll k;
    cin>>k;
    queue<ll>q;
    set<ll>s;
    for(ll i=1;i<=9;i++)
    {
        q.push(i);
        k--;
        s.insert(i);
        if(k==0)
        {
            cout<<i;
            return 0;
        }
    }
    vector<ll>v;
    while(!q.empty())
    {
        ll flag = 0;
        ll fi = q.front();
        q.pop();
        for(ll i=-1;i<=1;i++)
        {
            ll a = fi*10;
            ll b = fi%10;
            b += i;
            if(b < 0 || b>9)
                continue;
            a = a+b;
            if(s.find(a) != s.end())
                continue;
            q.push(a);
            s.insert(a);
            k--;
            //v.pb(a);
            //cout<<a<<endl;
            if(k == 0)
            {
                cout<<a;
                return 0;
                flag = 1;
                break;
            }
        }
        if(flag)
            break;
    }

}
