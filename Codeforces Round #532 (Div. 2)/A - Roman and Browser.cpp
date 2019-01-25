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
    ll k,ann=0,app=0,maxi=0;
    cin>>k;
    int arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==-1)
            ann++;
        else
            app++;
    }
    //cout<<ann<<" "<<app<<endl;
        for(ll i=0;i<k;i++)
        {
            ll an=ann;
            ll ap=app;
            for(ll j=i;j<n;j=j+k)
            {
                if(arr[j]==-1)
                    an--;
                else if(arr[j]==1)
                    ap--;
                //cout<<an<<" "<<ap<<endl;
            }
            maxi=max(maxi,abs(an-ap));
        }
        cout<<maxi;
    return 0;
}
