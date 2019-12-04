#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
ll fun(ll a)
{
    ll b=0,t=0;
    while(a)
    {
        ll temp=a%10;
        a/=10;
        if(temp==0)
        {
            continue;
        }
        b+=temp*pow(10,t++);
    }
    return b;
}
int main()
{
    ll n,m,sum;
    cin>>n>>m;
    sum=n+m;
    ll p=fun(n);
    ll q=fun(m);
    ll sum1=fun(sum);
    //cout<<p<<" "<<q<<" "<<sum1<<endl;
    if(p+q==sum1)
        cout<<"YES";
    else
        cout<<"NO";
}
