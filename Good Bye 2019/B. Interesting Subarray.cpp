#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
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
        ll arr[n];
        ll flag1=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(i>0 && abs(arr[i]-arr[i-1])>1)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                flag1=1;
                break;
            }
        }
        if(flag1==0)
        {
            cout<<"NO"<<endl;
        }
    }
}
