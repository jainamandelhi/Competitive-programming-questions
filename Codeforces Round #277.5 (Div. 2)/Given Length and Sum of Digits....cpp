#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;

int main()
{
    ll k;
    cin>>k;
    ll n;
    cin>>n;
    ll m=n;
    if(n==0 && k==1)
    {
        cout<<"0 0";
        return 0;
    }
    if(n>9*k || n==0)
    {
        cout<<"-1 -1";
        return 0;
    }
    string s="";
    while(1)
    {
        if(m>9)
        {
            m-=9;
            s.pb('9');
        }
        else
            break;
    }
    string s1=s;
    if(s.size()==k)
    {
        cout<<s<<" "<<s;
    }
    if(s.size()>k)
    {
        cout<<"-1 -1";
        return 0;
    }
    if(s.size()<k)
        s.pb(m+'0');
    while(s.size()!=k)
        s.pb('0');
    if(k-s1.size()>1){
        s1.pb((m-1)+'0');
        m=1;
    }
    if(k-s1.size()==1)
        s1.pb(m+'0');
    while(s1.size()+1<k)
        s1.pb('0');
    if(k!=s1.size())
        s1.pb('1');
    reverse(s1.begin(),s1.end());
    cout<<s1<<" "<<s;
	return 0;
}
