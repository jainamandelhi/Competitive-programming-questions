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
    vector<ll>arr(1000011);
    for(ll i = 2; i <= sqrt(1000010); i++)
    {
        if(arr[i] != 0)
            continue;
        for(ll j = 2; i*j <= (1000010); j++){
            if(arr[i*j] == 0)
            arr[i*j] = i;
        }
    }
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        while(k)
        {
            //cout<<arr[n]<<" ";
            if(arr[n] == 0)
            {
                n += n;
                k--;
                n += 2*k;
                break;
            }
            else if(arr[n] == 2)
            {
                n += 2*k;
                break;
            }
            else
            {
                n += arr[n];
            }
            k--;
        }
        cout<<n<<endl;
    }
    return 0;
}
