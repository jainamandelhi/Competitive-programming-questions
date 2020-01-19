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
        ll n,k,s;
        cin>>n>>k>>s;
        vector<ll>arr1;
        for(ll i=0;i<s;i++)
        {
            ll a;
            cin>>a;
            arr1.pb(a);
        }
        sort(arr1.begin(),arr1.end());
        ll j=0;
        while(j<arr1.size() && arr1[j]!=k)
            j++;
        if(j==arr1.size())
        {
            cout<<0<<endl;
            continue;
        }
        ll j1=j;
        ll temp1=0;
        while(j>0 && arr1[j-1]==arr1[j]-1){
            j--;
            temp1++;
        }
        temp1++;
        if(j==0 && arr1[0]==1)
            temp1=INT_MAX;
        ll temp2=0;
        while(j1<arr1.size()-1 && arr1[j1+1]==arr1[j1]+1){
            j1++;
            temp2++;
        }
        temp2++;
        if(j1==arr1.size()-1 && arr1[arr1.size()-1]==n)
            temp2=INT_MAX;
        cout<<min(temp1,temp2)<<endl;
    }
}
