#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 998244353
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
    cin >> s;
    ll n = s.size();
    vector<ll>z(n+1);
    ll l = 0,r = 0;
    ll cnt = 0;
    for(ll i=1;i<n;i++)
    {
        if(i > r)
        {
            l = r = i;
            while(r < n && s[r-l] == s[r])
                r++;
            z[i] = r-l;
            r--;
        }
        else
        {
            ll k = i-l;
            if(z[k] <= r-i)
                z[i] = z[k];
            else
            {
                l = i;
                while(r < n && s[r-l] == s[r])
                    r++;
                z[i] = r-l;
                r--;
            }
        }
    }
    /*for(ll i=0;i<n;i++)
        cout<<z[i]<<" ";
    cout<<endl;*/
    ll maxi = 0,ans = 0;
    for(ll i=n-1;i>=0;i--)
    {
        if(z[i] > 0)
        {
            if(maxi == 0)
            {
                if(z[i] + i == n)
                    maxi = z[i];
            }
            else if(maxi > 0)
            {
                if(z[i] >= maxi)
                {
                    ans = maxi;
                    if(z[i] + i == n)
                        maxi = z[i];
                }
            }
        }
    }
    if(ans == 0)
        cout<<"Just a legend";
    else
    {
        for(ll i=0;i<ans;i++)
            cout<<s[i];
    }
}
