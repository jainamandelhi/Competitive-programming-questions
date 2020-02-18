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
priority_queue<ll>q;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll arr1[n],arr2[n];
        ll j=0;
        for(ll i=0;i<2*n;i+=2)
        {
            arr1[j]=s[i]-'0';
            arr2[j]=s[i+1]-'0';
            j++;
        }
        ll ans=0;
        ll fi=0,se=0,turns=0;
        for(ll i=0;i<n;i++)
        {
            if(arr1[i]==1)
                fi++;
            turns++;
            if(se+n-i>fi && se>fi+n-i-1)
            {
                cout<<turns<<endl;
                break;
            }
            if(fi+n-i-1>se && fi>se+n-i)
            {
                cout<<turns<<endl;
                break;
            }
            if(arr2[i]==1)
                se++;
            turns++;
            if(se+n-i-1>fi && se>fi+n-i-1)
            {
                cout<<turns<<endl;
                break;
            }
            if(fi+n-i-1>se && fi>se+n-i-1)
            {
                cout<<turns<<endl;
                break;
            }
            if(i==n-1)
                cout<<turns<<endl;
        }
    }
}
