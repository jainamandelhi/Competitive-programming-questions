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
    string s;
    ll n;
    cin>>n>>s;
    ll arr[n];
    char maxi=s[0];
    ll col=0;
    string ans="YES";
    for(ll i=0;i<n;i++)
    {
        ll flag=0;
        if(s[i]>=maxi)
        {
            maxi=s[i];
            arr[i]=col;
        }
        else
        {
            ll p=0;
            for(ll p=0;p<i;p++)
            {
                if(s[p]>s[i] && col!=arr[p])
                {
                    ans="NO";
                    flag=1;
                    break;
                }
            }
            arr[i]=!col;
        }
        if(flag)
            break;
    }
    cout<<ans;
    if(ans=="NO")
        return 0;
    cout<<endl;
    for(ll i=0;i<n;i++)
        cout<<arr[i];
}
