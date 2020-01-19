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
    vector<ll>arr;
    ll mini=INT_MAX;
    for(ll i=0;i<9;i++)
    {
        ll a;
        cin>>a;
        arr.pb(a);
        mini=min(mini,a);
    }
    ll temp=n/mini;
    if(mini>n)
    {
        cout<<-1;
        return 0;
    }
    //cout<<temp;
    for(ll i=temp;i>=1;i--)
    {
        for(ll j=8;j>=0;j--)
        {
            //cout<<arr[j]<<" "<<(i-1)*mini<<" "<<n<<endl;
            if(arr[j]+(i-1)*mini<=n)
            {
                cout<<j+1;
                n-=arr[j];
                break;
            }
        }
    }
}
