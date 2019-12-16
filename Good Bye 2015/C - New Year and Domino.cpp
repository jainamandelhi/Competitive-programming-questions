#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
int main()
{
    ll n,m;
    cin>>n>>m;
    char arr[n][m];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
            cin>>arr[i][j];
    vector<vector<ll> >v1(n,vector<ll>(m,0));
    vector<vector<ll> >v2(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(j==0)
                continue;
            if(arr[i][j]=='.' && arr[i][j-1]=='.')
            {
                v1[i][j]=v1[i][j-1]+1;
            }
            else
            {
                v1[i][j]=v1[i][j-1];
            }
            continue;
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(i==0)
                continue;
            if(arr[i][j]=='.' && arr[i-1][j]=='.')
            {
                v2[i][j]=v2[i-1][j]+1;
            }
            else
            {
                v2[i][j]=v2[i-1][j];
            }
            continue;
        }
    }
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
        {
            if(i>0)
                v1[i][j]+=v1[i-1][j];
            if(j>0)
                v2[i][j]+=v2[i][j-1];
        }
    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        a--;
        b--;
        c--;
        d--;
        if(a==0 && b==0)
        {
            cout<<v1[c][d]+v2[c][d]<<endl;
            continue;
        }
        ll temp=0;
        temp+=v1[c][d];
        temp-=v1[c][b];
        if(a>0){
        temp-=v1[a-1][d];
        temp+=v1[a-1][b];
        }
        temp+=v2[c][d];
        temp-=v2[a][d];
        if(b>0){
        temp-=v2[c][b-1];
        temp+=v2[a][b-1];
        }
        cout<<temp<<endl;
    }
}
