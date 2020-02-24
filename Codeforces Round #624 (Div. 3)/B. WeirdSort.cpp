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
        ll n,m;
        cin>>n>>m;
        vector<ll>arr;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            arr.pb(a);
        }
        set<ll>s;
        for(ll i=0;i<m;i++)
        {
            ll a;
            cin>>a;
            a--;
            s.insert(a);
        }
        for(ll i=0;i<n;i++)
        {
            if(i+1<n && arr[i]>arr[i+1] && s.find(i)!=s.end())
            {
                while(i+1<n && arr[i]>arr[i+1] && s.find(i)!=s.end())
                {
                    swap(arr[i],arr[i+1]);
                    i++;
                }
                i=-1;
            }
        }
        ll mini=INT_MIN,flag=0;
        for(ll i=0;i<n;i++)
        {
            //cout<<arr[i]<<" ";
            if(arr[i]>=mini)
            {
                mini=arr[i];
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
}
