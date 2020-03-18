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
    string s;
    cin>>s;
    ll i=0,j=0;
    ll cnt = 0,time = 0,flag = 0;
    while(j<n)
    {
        if(s[j]=='(')
            cnt++;
        else
            cnt--;
        if(cnt<0)
        {
            flag=1;
            j++;
            continue;
        }
        if(cnt==0 && flag==0)
        {
            i=j;
            i++;
        }
        if(cnt==0 && flag==1)
        {
            flag = 0;
            time+=(j-i+1);
            j++;
            i=j;
            continue;
        }
        j++;
    }
    if(i!=j)
    {
        if(cnt!=0)
        {
            cout<<-1;
            return 0;
        }
        time+=(j-i);
    }
    cout<<time;
}
