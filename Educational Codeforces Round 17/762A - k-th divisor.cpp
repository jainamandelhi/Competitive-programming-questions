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
    priority_queue<ll,vector<ll>,greater<ll> >q;
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(i==sqrt(n))
        {
            if(sqrt(n)*sqrt(n)==n)
            {
                q.push(sqrt(n));
                break;
            }
        }
        if(n%i==0)
        {
            q.push(i);
            q.push(n/i);
        }
    }
    if(q.size()<k)
        cout<<-1;
    else
    {
        k--;
        while(k--)
            q.pop();
        cout<<q.top();
    }
}
