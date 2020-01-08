#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll i=0,j=0;
	ll flag1=0,flag2=0;
	ll ans1=0;
	while(i<n && j<n)
    {
        if(j<n && i<n && flag1==0)
        {
            if(s[i]!='r')
            {
                while(j<n && s[j]!='r')
                {
                    j++;
                }
                if(j<n){
                swap(s[i],s[j]);
                j++;
                ans1++;
                }
            }
            flag1=1;
            i++;
            j=max(j,i);
        }
       if(j<n && i<n && flag1==1)
       {
           if(s[i]!='b')
           {
                while(j<n && s[j]!='b')
                    j++;
                if(j<n){
                swap(s[i],s[j]);
                j++;
                ans1++;
                }
           }
           flag1=0;
           i++;
           j=max(i,j);
       }
    }
    ans1=ans1+(n-min(i,j)+1)/2;
    ll ans2=0;
    i=0,j=0;
	flag1=0,flag2=0;
	while(i<n && j<n)
    {
        if(j<n && i<n && flag1==0)
        {
            if(s[i]!='b')
            {
                while(j<n && s[j]!='b')
                {
                    j++;
                }
                if(j<n){
                swap(s[i],s[j]);
                j++;
                ans2++;
                }
            }
            flag1=1;
            i++;
            j=max(j,i);
        }
       if(j<n && i<n && flag1==1)
       {
           if(s[i]!='r')
           {
               while(j<n && s[j]!='r')
                    j++;
               if(j<n){
                swap(s[i],s[j]);
                j++;
                ans2++;
                }
           }
           flag1=0;
           i++;
           j=max(j,i);
       }
    }
    ans2=ans2+(n-min(i,j)+1)/2;
    cout<<min(ans1,ans2);
}
