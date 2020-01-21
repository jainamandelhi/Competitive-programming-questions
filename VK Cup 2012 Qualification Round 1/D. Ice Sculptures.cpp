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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll ans=INT_MIN;
    for(ll i=0;i<=n;i++)
    {
        ll a=i+1;
        if(n%a==0)
        {
            if(n/a<3)
                break;
            ll flag=0;
            ll j=0;
            ll k=j;
            ll flag1=0;
            while(1)
            {
                if(j==n)
                    break;
                k=j;
                ll temp=arr[k];
                k=k+a;
                k%=n;
                while(k!=j)
                {
                    temp+=arr[k];
                    k+=a;
                    k%=n;
                    if(k==0 && j!=0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag)
                    break;
                ans=max(ans,temp);
                j++;
            }
        }
    }
    cout<<ans;
}
