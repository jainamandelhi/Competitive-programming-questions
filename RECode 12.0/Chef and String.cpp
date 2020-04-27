#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000000000000007
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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1=s,s2=s;
        ll n= s.size();
        for(ll i = 0; i < n-1; i++)
            swap(s1[i],s1[i+1]);
        for(ll i = n-1; i > 0; i--)
            swap(s2[i],s2[i-1]);
        if(s1 == s2)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
