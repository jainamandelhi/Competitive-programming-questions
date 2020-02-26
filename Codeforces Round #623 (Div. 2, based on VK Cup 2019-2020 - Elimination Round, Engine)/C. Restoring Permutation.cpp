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
        set<ll>s;
        ll flag=0,flag1=1;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            arr[i]=a;
            if(a==1)
                flag1=0;
            if(a==2*n)
                flag=1;
            s.insert(a);
        }
        if(flag || flag1)
        {
            cout<<-1<<endl;
            continue;
        }
        ll ans[2*n],k=0;
        flag=0;
        for(ll i=0;i<n;i++)
        {
            ans[k]=arr[i];
            k++;
            for(ll j=arr[i]+1;j<=2*n;j++)
            {
                if(s.find(j)==s.end())
                {
                    ans[k]=j;
                    s.insert(j);
                    break;
                }
                if(j==2*n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
            k++;
        }
        if(flag)
        {
            cout<<-1<<endl;
            continue;
        }
        for(ll i=0;i<2*n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
