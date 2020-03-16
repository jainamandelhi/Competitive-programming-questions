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
    ll arr[3001]={0};
    for(ll i = 2 ; i <= sqrt(3000) ; i++)
    {
        if(arr[i])
            continue;
        for(ll j = i*i ; j <= 3000 ; j+=i)
        {
            arr[j] = 1;
        }
    }
    ll n,ans=0;
    cin>>n;
    for(ll i=6;i<=n;i++)
    {
        ll cnt=0 ;
        ll a=i;
        for(ll j=2;j<=i/2;j++)
        {
           // cout<<j<<" "<<arr[j]<<endl;
            if(arr[j]==0 && i%j==0)
            {
                cnt++;
                while(a%j==0)
                    a/=j;
            }
            if(a==1 || cnt>2)
                break;
        }
        if(arr[i]==0)
            cnt++;
        if(cnt==2)
            ans++;
    }
    cout<<ans;
}
