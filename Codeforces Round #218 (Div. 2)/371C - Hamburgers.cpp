#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    string s;
    cin>>s;
    ll a,b,c;
    cin>>a>>b>>c;
    ll pa,pb,pc;
    cin>>pa>>pb>>pc;
    ll p=0,q=0,r=0;
    ll money;
    cin>>money;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='B')
            p++;
        if(s[i]=='S')
            q++;
        if(s[i]=='C')
            r++;
    }
    ll tt=0;
    tt=tt+p*pa + q*pb + r*pc;
    if(p==0)
        a=0;
    if(q==0)
        b=0;
    if(r==0)
        c=0;
    ll ans=0;
    while(1)
    {
       // cout<<money<<" ";
       if(a==0 && b==0 && c==0)
       {
           ans=ans+money/tt;
           break;
       }
        if(a>=p && b>=q && c>=r)
        {
            a-=p;
            b-=q;
            c-=r;
            ans++;
            continue;
        }
        if(a<p)
        {
            ll temp=p-a;
            money=money-pa*temp;
            if(money<0)
                break;
            a=p;
        }
        if(b<q)
        {
            ll temp=q-b;
            money=money-pb*temp;
            if(money<0)
                break;
            b=q;
        }
        if(c<r)
        {
            ll temp=r-c;
            money=money-pc*temp;
            if(money<0)
                break;
            c=r;
        }
        a-=p;
        b-=q;
        c-=r;
        ans++;
    }
    cout<<ans;
}
