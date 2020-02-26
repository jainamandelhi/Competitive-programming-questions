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
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>a>>b>>n;
        string s;
        cin>>s;
        ll m=s.size();
        vector<ll>arr(m);
        for(ll i=m-2;i>=0;i--)
        {
            if(i==m-2)
            {
                if(s[i]=='B')
                    arr[i]=b;
                else
                    arr[i]=a;
            }
            else
            {
                if(s[i]==s[i+1])
                {
                    arr[i]=arr[i+1];
                }
                else
                {
                    if(s[i]=='B')
                        arr[i]=arr[i+1]+b;
                    else
                        arr[i]=arr[i+1]+a;
                }
            }
        }
        for(ll i=0;i<m;i++)
        {
            if(arr[i]<=n)
            {
                cout<<i+1;
                break;
            }
            if(i==m-1)
                cout<<i+1;
        }
        cout<<endl;
    }
}
