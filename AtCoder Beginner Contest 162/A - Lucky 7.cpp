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
    string s;
    cin>>s;
    ll falg = 1;
    for(ll i = 0; i < s.size(); i++)
    {
        if(s[i] == '7')
            falg = 0;
    }
    if(!falg)
        cout<<"Yes";
    else
        cout<<"No";
}
