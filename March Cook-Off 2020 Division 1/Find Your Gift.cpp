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
        char ch = '.';
        ll l=0,r=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i] == 'L' && ch!='L' && ch != 'R')
            {
                l--;
                ch = 'L';
            }
            else if(s[i] == 'R' && ch!='L' && ch != 'R')
            {
                l++;
                ch = 'R';
            }
            else if(s[i] == 'U' && ch != 'D' && ch != 'U')
            {
                r++;
                ch = 'U';
            }
            else if(s[i] == 'D' && ch != 'D' && ch != 'U')
            {
                r--;
                ch = 'D';
            }
        }
        cout<<l<<" "<<r<<endl;
    }
}
