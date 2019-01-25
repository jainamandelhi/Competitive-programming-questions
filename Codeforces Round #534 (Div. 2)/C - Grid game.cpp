#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll n=s.size(),c=0,r=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            cout<<2<<" "<<c+1<<endl;
            c++;
            c%=4;
        }
        if(s[i]=='1')
        {
            cout<<1<<" "<<r+1<<endl;
            r+=2;
            r%=4;
        }
    }
	return 0;
}
