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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll ans[n];
        for(ll i=0;i<n;i++)
            ans[i]=arr[i];
        sort(arr,arr+n);
        ll flag=0,index=-1;
        for(ll i=0;i<n;i++)
        {
            if(k%arr[i]!=0)
            {
                index=i;
                flag=1;
                break;
            }
        }
        for(ll i=1;i<n;i++)
        {
            if(arr[i]%arr[i-1]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag && index>-1)
        {
            cout<<"YES"<<" ";
            for(ll i=0;i<n;i++)
            {
                if(index==i)
                {
                    ll a=k/arr[i];
                    a++;
                    cout<<a<<" ";
                    continue;
                }
                cout<<0<<" ";
            }
            cout<<endl;
            continue;
        }
        ll k1,k2,temp;
        if(flag)
        {
            cout<<"YES"<<" ";
            for(ll i=1;i<n;i++)
            {
                if(arr[i]%arr[i-1]!=0)
                {
                    k2=arr[i-1];
                    k1=arr[i];
                    k=k-k1;
                    temp=k/arr[i-1];
                    temp++;
                    break;
                }
            }
            //cout<<k<<" "<<k2<<" "<<temp<<" ";
            ll p=0,q=0;
            for(ll i=0;i<n;i++)
            {
                if(p==0 && ans[i]==k1)
                {
                    p=1;
                    cout<<1<<" ";
                }
                else if(q==0 && ans[i]==k2)
                {
                    q=1;
                    cout<<temp<<" ";
                }
                else
                    cout<<0<<" ";
            }
            cout<<endl;
            continue;
        }
        cout<<"NO";
        cout<<endl;
    }
}
