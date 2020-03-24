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
    ll n,m;
    cin>>n>>m;
    ll t;
    cin>>t;
    for(ll i=0;i<2*t;i++)
    {
        ll a,b;
        cin>>a>>b;
    }
    cout<<n-1+m-1+n*m-1<<endl;
    for(ll i=0;i<m-1;i++)
        cout<<'R';
    for(ll i=0;i<n-1;i++)
        cout<<'U';
    ll flag = 1;
    for(ll i=0;i<n;i++)
    {
        ll j;
        if(flag)
        {
            j = m-1;
            while(j>0)
            {
                cout<<'L';
                j--;
            }
            if(i<n-1)
                cout<<'D';
            flag = 0;
        }
        else
        {
            j = 0;
            while(j<m-1)
            {
                cout<<'R';
                j++;
            }
            if(i<n-1)
                cout<<'D';
            flag = 1;
        }
    }
}
