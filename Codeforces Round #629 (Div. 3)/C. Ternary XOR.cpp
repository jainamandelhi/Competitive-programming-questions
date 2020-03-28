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
        string s1="1",s2="1";
        ll flag = 0;
        for(int i = 1;i < n;i++)
        {
            if(flag)
            {
                s1.pb('0');
                s2.pb(s[i]);
                continue;
            }
            if(s[i] == '2')
            {
                s1.pb('1');
                s2.pb('1');
                continue;
            }
            if(s[i] == '1')
            {
                s1.pb('1');
                s2.pb('0');
                flag = 1;
                continue;
            }
            if(s[i] == '0')
            {
                s1.pb('0');
                s2.pb('0');
                continue;
            }
        }
        cout<<s1<<endl;
        cout<<s2<<endl;
    }
}
