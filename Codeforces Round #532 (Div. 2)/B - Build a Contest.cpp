#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
       return a;
    return gcd(b, a%b);
}
ll solve(ll n, ll m,ll d)
{
  ll cnt=0;
  ll a=0,b=0;
  while(1)
  {
      //cout<<a<<" "<<b<<endl;
    if(a==d || b==d)
        return cnt;
    cnt++;
    if(a==0)
        a=n;
    else if(b<m)
    {
        ll temp=b;
        b+=min(a,m-b);
        a-=min(a,m-temp);
    }
    else if(b==m)
    {
        b=0;
    }
  }
}
int main()
{
    FAST;
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll arr1[k];
    ll mini=INT_MAX;
    vector<int>arr(n+1,0);
    ll flag=0,flag1=0;
    for(ll i=0;i<k;i++)
    {
        cin>>arr1[i];
        if(flag<n)
        {
            if(arr[arr1[i]]==0)
                flag++;
            arr[arr1[i]]++;
        }
        if(flag!=n)
        {
            cout<<0;
        }
        if(flag==n)
        {
            cout<<1;
            flag=0;
            for(ll j=1;j<=n;j++)
            {
                arr[j]--;
                if(arr[j]>0)
                    flag++;
            }
        }
        //cout<<flag<<endl;
    }
    return 0;
}
