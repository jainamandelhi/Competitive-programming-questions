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
    ll n,m;
    cin>>n>>m;
    ll k;
    cin>>k;
    k--;
    ll i=1,j=1,p=2,flag=1,cnt=0;
    while(k--)
    {
        cout<<2<<" ";
        while(p--)
        {
            if(j==m+1)
            {
                i++;
                j=m;
                flag=0;
            }
            else if(j==0)
            {
                j=1;
                i++;
                flag=1;
            }
            cout<<i<<" "<<j<<" ";
            cnt++;
            if(flag)
                j++;
            else
                j--;
        }
        p=2;
        cout<<endl;
    }
        cout<<n*m-cnt<<" ";
        while(cnt<n*m)
        {
            if(j==m+1)
            {
                i++;
                j=m;
                flag=0;
            }
            else if(j==0)
            {
                j=1;
                i++;
                flag=1;
            }
            cout<<i<<" "<<j<<" ";
            cnt++;
            if(flag)
                j++;
            else
                j--;
        }
}
