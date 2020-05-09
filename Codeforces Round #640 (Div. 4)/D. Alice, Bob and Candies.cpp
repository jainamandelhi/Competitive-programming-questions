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
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        ll i = 0;
        ll j = n-1;
        ll suma = 0, sumb = 0;
        ll moves = 0;
        ll sumat = 0, sumbt = 0;
        while(i <= j)
        {
            //cout<<i<<" "<<j<<" "<<suma<<" "<<sumb<<endl;
            sumat = 0;
            while(i <= j)
            {
                suma += arr[i];
                sumat += arr[i];
                i++;
                if(sumat > sumbt)
                    break;
            }
            moves++;
            if(i > j)
                break;
            sumbt = 0;
            while(i <= j)
            {
                sumb += arr[j];
                sumbt += arr[j];
                j--;
                if(sumbt > sumat)
                    break;
            }
            moves++;
            //cout<<suma<<" "<<sumb<<" "<<moves<<endl;
        }
        cout<<moves<<" "<<suma<<" "<<sumb<<endl;
    }
    return 0;
}
