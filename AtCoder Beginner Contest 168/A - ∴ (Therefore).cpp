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
    ll n;
    cin>>n;
    ll a = n%10;
    if(a == 2 || a == 4 || a == 5 || a == 7 || a == 9)
        cout<<"hon";
    else if(a == 3)
        cout<<"bon";
    else
        cout<<"pon";
    return 0;
}
