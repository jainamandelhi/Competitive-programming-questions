#include <iostream>
#define ll long long
#define mp make_pair
#define pb push_back
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ll a,d,m;
	cin>>a>>d>>m;
	ll g,p,b,flag=0;
	cin>>g>>p>>b;
	if(g>=a)
    {
        g-=a;
    }
    else
        flag=1;
    ll s=g+p;
    if(s>=d)
        s-=d;
    else
        flag=1;
    if(b+s>=m)
        s=0;
    else
        flag=1;
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";
	return 0;
}
