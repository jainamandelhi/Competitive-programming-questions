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
        string s;
        cin>>s;
        for(ll i = s.size()-1; i > 0; i--)
        {
            if(i-1 >= 0 && s[i] == '0' && s[i-1] == '1')
            {
                if(i + 1 < s.size() && s[i+1] == '0')
                {
                    s.erase(i,1);
                    i++;
                }
                else
                {
                    s.erase(i-1,1);
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
