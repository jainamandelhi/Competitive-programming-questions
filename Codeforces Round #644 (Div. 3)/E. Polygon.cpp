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
        vector<string>arr;
        for(ll i = 0 ; i < n; i++)
        {
            string s;
            cin>>s;
            arr.pb(s);
        }
        ll flag = 1;
        for(ll i = n-2; i >= 0; i--)
        {
            for(ll j = n-2; j >= 0; j--)
            {
                if(arr[i][j] == '1')
                {
                    if(arr[i+1][j] == '1' || arr[i][j+1] == '1')
                        continue;
                    flag = 0;
                    break;
                }
            }
            if(flag == 0)
                break;
        }
        if(flag)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
