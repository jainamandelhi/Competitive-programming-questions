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
        ll k;
        cin>>k;
        ll b = 8*k+1;
        b = sqrt(b);
        b--;
        b /= 2;
        int c = (b*(b+1))/2;
        if((b*(b+1))/2 != k)
            b++;
        int it1 = n-b-1,it2;
        c = k-c;
        if(c == 0)
            it2 = it1+1;
        else
        {
            c--;
            it2 = n-c-1;
        }
        for(ll i =0;i<n;i++)
        {
            if(i == it1 || i == it2)
                cout<<'b';
            else
                cout<<'a';
        }
        cout<<endl;
    }
}
