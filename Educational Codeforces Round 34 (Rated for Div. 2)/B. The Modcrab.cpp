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
    ll h1,a1,c1,h2,a2;
    cin>>h1>>a1>>c1>>h2>>a2;
    vector<string>ans;
    while(h2 > 0)
    {
        if(h1 <= a2 && h2>a1)
        {
            ans.pb("HEAL");
            h1 += c1;
        }
        else
        {
            ans.pb("STRIKE");
            h2 -= a1;
        }
        h1 -= a2;
    }
    cout<<ans.size()<<endl;
    for(ll i = 0; i < ans.size(); i++)
        cout<<ans[i]<<endl;
    return 0;
}
