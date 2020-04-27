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
        ll a,b,x;
        cin>>a>>b>>x;
        ll no = gcd(a,b);
        no = (a*b)/no;
        vector<ll>arr(no+1);
        for(ll i = 1; i <= no; i++)
            arr[i] = ((i%a)%b) != ((i%b)%a);
        ll tot = 0;
        for(ll i = 1; i <= no; i++)
            arr[i] += arr[i-1];

        while(x--)
        {
            ll l,r;
            cin>>l>>r;
            ll ans = 0;
            ans = r/no*arr[no]+arr[(r%no)] - ((l-1)/no*arr[no]+arr[((l-1)%no)]);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}
