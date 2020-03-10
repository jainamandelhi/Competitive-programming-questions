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
    scanf("%lld",&t);
    while(t--)
    {
        ll n,m;
        scanf("%lld%lld",&n,&m);
        ll flag=0;
        ll int arr[n];
        for(ll int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        unordered_map<ll,ll>s;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]==0)
                continue;
            ll a=arr[i];
            while(a)
            {
                ll b=0;
                b=log(a)/log(m);
                b--;
                if(b<0)
                    b=0;
                //b--;
                while(pow(m,b+1)<=a)
                    b++;
                //cout<<b<<endl;
                //cout<<fixed<<setprecision(15)<<pow(m,b)<<endl;
                if(s.find(b)!=s.end())
                {
                    flag=1;
                    break;
                }
                s[b]=0;
                ll temp=1;
                temp=pow(m,b);
                a=a-temp;
            }
            if(flag)
                break;
        }
        if(flag)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
}
