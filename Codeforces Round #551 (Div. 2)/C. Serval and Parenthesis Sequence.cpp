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
//vector<ll>arr3(1000000001);
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack<pair<char,ll> >st;
    stack<pair<char,ll> >st1;
    if(s[0]==')' || s[n-1]=='(')
    {
        cout<<":(";
        return 0;
    }
    s[n-1]=')';
    s[0]='(';
    ll open=0,close=0,qm=0;
    for(ll i=1;i<n-1;i++)
    {
        if(s[i]==')')
        {
            close++;
        }
        else if(s[i]=='?')
        {
            qm++;
        }
        else
        {
            open++;
        }
    }
    ll temp1=n-2;
    if(n%2)
    {
        cout<<":(";
        return 0;
    }
    temp1/=2;
    if(open<=temp1)
    {
        ll u=temp1-open;
        open=u;
        qm-=u;
    }
    //cout<<qm;
    if(qm<0)
    {
        cout<<":(";
        return 0;
    }
    if(close<=temp1)
    {
        ll u=temp1-close;
        close=u;
        qm-=u;
    }
    //cout<<qm;
    if(qm!=0)
    {
        cout<<":(";
        return 0;
    }
    //cout<<qm;
    for(ll i=1;i<n-1;i++)
    {
        if(s[i]=='?' && open)
        {
            s[i]='(';
            open--;
        }
        else if(s[i]=='?' && !open){
            s[i]=')';
        }
    }
    ll cnt=0;
    for(ll i=1;i<n-1;i++)
    {
        if(s[i]=='(')
            cnt++;
        else
            cnt--;
        if(cnt<0)
        {
            s=":(";
            break;
        }
    }
    if(cnt!=0)
        s=":(";
    //ll cnt=0;
    cout<<s;
}
