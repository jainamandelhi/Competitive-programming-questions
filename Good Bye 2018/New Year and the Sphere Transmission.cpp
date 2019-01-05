#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i!=0)
            continue;
        if(n%i==0)
        {
            ll c=n/i;
           /// cout<<c<<" ";
            ll sum=(c*(2+(c-1)*i))/2;
            if(m.find(sum)==m.end())
                m[sum]++;
            ll temp;
            //cout<<sum<<endl;
            temp=c;
                 c=n/temp;
              //  cout<<temp<<" ";
            //    cout<<c<<" ";
            sum=(c*(2+(c-1)*temp))/2;
            if(m.find(sum)==m.end())
                m[sum]++;
          // cout<<sum<<endl;
        }
    }
    map<ll,ll>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
        cout<<itr->first<<" ";
    return 0;
}
