/* Isn't passion overrated?*/

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
        ll n;
        cin>>n;
        ll arr[n];
        vector<ll>freq(1001);
        ll e = 0, o = 0;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
            if(arr[i] % 2)
                o++;
            else
                e++;
        }
        if(o % 2 == 0 && e % 2 == 0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll f = 0;
        for(ll i = 1; i < 1000; i++)
        {
            if(freq[i] == 0)
                continue;
            if(freq[i])
            {
                if(freq[i-1] || freq[i+1])
                {
                    f = 1;
                    break;
                }
            }
        }
        if(f)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
