#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<-1;
        return 0;
    }
    ll a=1,b=1;
    for(ll i=1;i<n;i++)
    {
        a*=10;
        a%=7;
    }
    a=7-a;
    b=10;
    while(1)
    {
        if((b+1)%3==0 && b%7==a)
            break;
        else
            b+=10;
    }
   // cout<<b<<endl;
    stringstream ss;
    ss<<b;
    string st=ss.str();
    ll k=st.size();
    if(k==n)
    {
        cout<<b+pow(10,n-1);
        return 0;
    }
    if(k>n)
    {
        cout<<-1;
        return 0;
    }
    cout<<1;
    for(int i=1;i<n-k;i++)
        cout<<0;
    cout<<st;
    return 0;
}
