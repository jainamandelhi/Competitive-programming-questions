/* Isn't passion overrated?*/

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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n , k;
        cin>>n>>k;
        ll arr[n];
        ll flag = 0;
        for(ll i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == k)
                flag = 1;
        }
        if(flag == 0)
        {
            cout<<"no"<<endl;
            continue;
        }
        for(ll i = 0; i < n; i++)
        {
            if(arr[i] < k)
            {
                if(i-2 >= 0)
                {
                    vector<ll>temp;
                    temp.pb(arr[i-2]);
                    temp.pb(arr[i-1]);
                    temp.pb(arr[i]);
                    sort(temp.begin(),temp.end());
                    if(temp[1] >= k)
                    {
                        arr[i] = arr[i-1] = arr[i-2] = k;
                    }
                }
                if(i+2 < n)
                {
                    vector<ll>temp;
                    temp.pb(arr[i+2]);
                    temp.pb(arr[i+1]);
                    temp.pb(arr[i]);
                    sort(temp.begin(),temp.end());
                    if(temp[1] >= k)
                    {
                        arr[i] = arr[i+1] = arr[i+2] = k;
                    }
                }
                if(i-1 >= 0 && i+1 < n)
                {
                    vector<ll>temp;
                    temp.pb(arr[i-1]);
                    temp.pb(arr[i]);
                    temp.pb(arr[i+1]);
                    sort(temp.begin(),temp.end());
                    if(temp[1] >= k)
                    {
                        arr[i] = arr[i+1] = arr[i-1] = k;
                    }
                }
            }
        }
        for(ll i = n-1; i >= 0; i--)
        {
            if(arr[i] < k)
            {
                if(i-2 >= 0)
                {
                    vector<ll>temp;
                    temp.pb(arr[i-2]);
                    temp.pb(arr[i-1]);
                    temp.pb(arr[i]);
                    sort(temp.begin(),temp.end());
                    if(temp[1] >= k)
                    {
                        arr[i] = arr[i-1] = arr[i-2] = k;
                    }
                }
                if(i+2 < n)
                {
                    vector<ll>temp;
                    temp.pb(arr[i+2]);
                    temp.pb(arr[i+1]);
                    temp.pb(arr[i]);
                    sort(temp.begin(),temp.end());
                    if(temp[1] >= k)
                    {
                        arr[i] = arr[i+1] = arr[i+2] = k;
                    }
                }
                if(i-1 >= 0 && i+1 < n)
                {
                    vector<ll>temp;
                    temp.pb(arr[i-1]);
                    temp.pb(arr[i]);
                    temp.pb(arr[i+1]);
                    sort(temp.begin(),temp.end());
                    if(temp[1] >= k)
                    {
                        arr[i] = arr[i+1] = arr[i-1] = k;
                    }
                }
            }
        }
        for(ll i = 0; i < n; i++)
        {
            if(arr[i] < k)
            {
                flag = 0;
                break;
            }
        }
        if(!flag)
            cout<<"no";
        else
            cout<<"yes";
        cout<<endl;
    }
    return 0;
}
