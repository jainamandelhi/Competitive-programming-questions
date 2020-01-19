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
    ll n;
    cin>>n;
    vector<vector<ll> >arr(3,vector<ll>(n+1));
    ll t;
    cin>>t;
    ll flag=0;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        arr[a][b]^=1;
        if(arr[a][b]==0)
        {
            if(a-1>=1 && b-1>=1 && arr[a-1][b-1]==1)
        {
            flag--;
        }
        if(a-1>=1 && arr[a-1][b]==1)
        {
            flag--;
        }
        if(a-1>=1 && b+1<=n && arr[a-1][b+1]==1)
        {
            flag--;
        }
        if(a+1<=2 && b-1>=1 && arr[a+1][b-1]==1)
        {
            flag--;
        }
        if(a+1<=2 && arr[a+1][b]==1)
        {
            flag--;
        }
        if(a+1<=2 && b+1<=n && arr[a+1][b+1]==1)
        {
            flag--;
        }
        ll u=0;
        flag=max(u,flag);
        if(flag==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
        {
            cout<<"No"<<endl;
            continue;
        }
        }
        ll flag1=0;
        if(a-1>=1 && b-1>=1 && arr[a-1][b-1]==1)
        {
            flag++;
            flag1=1;
        }
        if(a-1>=1 && arr[a-1][b]==1)
        {
            flag++;
            flag1=1;
        }
        if(a-1>=1 && b+1<=n && arr[a-1][b+1]==1)
        {
            flag++;
            flag1=1;
        }
        if(a+1<=2 && b-1>=1 && arr[a+1][b-1]==1)
        {
            flag++;
            flag1=1;
        }
        if(a+1<=2 && arr[a+1][b]==1)
        {
            flag++;
            flag1=1;
        }
        if(a+1<=2 && b+1<=n && arr[a+1][b+1]==1)
        {
            flag++;
            flag1=1;
        }
        if(flag1==1 || flag>0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        continue;
    }
}
