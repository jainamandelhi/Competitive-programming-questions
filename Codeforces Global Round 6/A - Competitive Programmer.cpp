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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll flag=0;
        ll n=s.size();
        for(ll i=0;i<n;i++)
        {
            ll a=s[i]-'0';
            if(a!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"red"<<endl;
            continue;
        }
        ll zero=0,even=0,sum=0;
        for(ll i=0;i<n;i++)
        {
            ll a=s[i]-'0';
            if(a==0 && zero>0)
                even++;
            else if(a==0 && zero==0)
                zero++;
            else if(a%2==0)
                even++;
            sum+=a;
        }
        if(zero>0 && even > 0 && sum%3==0)
            cout<<"red"<<endl;
        else
            cout<<"cyan"<<endl;
    }
}
