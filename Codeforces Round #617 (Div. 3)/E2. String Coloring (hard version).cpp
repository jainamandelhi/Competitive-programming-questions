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
	string s;
	cin>>n>>s;
	map<char,ll>m;
	ll arr[n];
	ll ans=1;
	char maxi=s[0];
	for(ll i=0;i<n;i++)
    {
        m[s[i]]=1;
        if(s[i]>=maxi)
        {
            maxi=s[i];
            arr[i]=1;
        }
        else
        {
            //cout<<s[i]<<" "<<m.upper_bound(s[i])->second<<endl;
            auto it=m.upper_bound(s[i]);
            ll temp=-1;
            while(it!=m.end())
            {
                temp=max(temp,it->second);
                it++;
            }
            arr[i]=temp+1;
            m[s[i]]=arr[i];
        }
        ans=max(ans,arr[i]);
    }
    cout<<ans<<endl;
	for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
