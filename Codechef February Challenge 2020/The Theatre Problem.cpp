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
ll ans1=0;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t,ans1=0;
    cin>>t;
    ans1=0;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[4][4]={0};
        for(ll i=0;i<n;i++)
        {
            char ch;
            ll a;
            cin>>ch>>a;
            arr[ch-'A'][a/3-1]++;
        }
        /*for(ll i=0;i<4;i++)
        {
            for(ll j=0;j<4;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }*/
        ll ans=INT_MIN;
        for(ll i=0;i<4;i++)
        {
            for(ll j=0;j<4;j++)
            {
                if(i==j)
                    continue;
                for(ll k=0;k<4;k++)
                {
                    if(j==k || k==i)
                        continue;
                    for(ll l=0;l<4;l++)
                    {
                        ll temp=0;
                        if(l==k || l==j || l==i)
                            continue;
                        if(arr[0][i]==0)
                            temp-=100;
                        if(arr[1][j]==0)
                            temp-=100;
                        if(arr[2][k]==0)
                            temp-=100;
                        if(arr[3][l]==0)
                            temp-=100;
                        vector<ll>temp2;
                        temp2.pb(arr[0][i]);
                        temp2.pb(arr[1][j]);
                        temp2.pb(arr[2][k]);
                        temp2.pb(arr[3][l]);
                        sort(temp2.begin(),temp2.end());
                        temp=temp+temp2[0]*25;
                        temp=temp+temp2[1]*50;
                        temp=temp+temp2[2]*75;
                        temp=temp+temp2[3]*100;
                        ans=max(ans,temp);
                        //cout<<temp2[0]<<" "<<temp2[1]<<" "<<temp2[2]<<" ";
                        //cout<<temp2[3]<<" "<<temp<<endl;
                        //cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<temp<<endl;
                    }
                }
            }
        }
        ans1+=ans;
        cout<<ans<<endl;
    }
    cout<<ans1;
}
