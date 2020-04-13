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
    string s;
    cin>>s;
    ll n = s.size();
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '/' && i+1 < n && s[i+1] == '/')
        {
            s.erase(i,1);
            i--;
        }
    }
    if(s[s.size()-1] == '/' && s.size() > 1)
        s.erase(s.size()-1,1);
    cout<<s;
}
