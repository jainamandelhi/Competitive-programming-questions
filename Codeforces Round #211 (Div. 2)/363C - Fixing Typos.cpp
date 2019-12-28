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
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    ll n=s.size();
    if(n<2)
    {
        cout<<s;
        return 0;
    }
    vector<ll>arr(n);
    for(ll i=0;i<s.size()-2;i++)
    {
        if(s[i]==s[i+1] && s[i]==s[i+2]){
            s.erase(i,1);
            i--;
        }
    }
    for(ll i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            arr[i]=1;
            i++;
        }
    }
    for(ll i=0;i<s.size();i++)
    {
        if(arr[i]==1 && i-2>=0 && arr[i-2]==1 && i+2<s.size() && arr[i+2]==1)
        {
            arr[i]=0;
            s[i]='!';
        }
    }
    for(ll i=0;i<s.size();i++)
    {
        if(arr[i]==1 && i+2<s.size() && arr[i+2]==1)
        {
            arr[i]=0;
            s[i]='!';
        }
    }
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]!='!')
            cout<<s[i];
    }
}
