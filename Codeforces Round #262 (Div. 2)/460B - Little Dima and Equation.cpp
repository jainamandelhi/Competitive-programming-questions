#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    vector<ll>ans;
    for(ll i=1;i<=81;i++)
    {
        ll temp=pow(i,a);
        temp*=b;
        temp+=c;
        ll sum=0;
        if(temp>1000000000)
            continue;
        ll temp1=temp;
        while(temp)
        {
            sum+=temp%10;
            temp/=10;
        }

        if(sum==i)
        {
            //cout<<temp1<<" "<<sum<<" "<<i<<endl;5 65 3525 65 3525 65
            ans.pb(temp1);
        }
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
