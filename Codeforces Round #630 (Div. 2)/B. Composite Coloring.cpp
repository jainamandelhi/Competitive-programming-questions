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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        vector<ll>temp(32);
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2 == 0){
                temp[2]++;
                arr[i] = 2;
            }
            else if(arr[i]%3 == 0){
                temp[3]++;
                arr[i] = 3;
            }
            else if(arr[i]%5 == 0){
                temp[5]++;
                arr[i] = 5;
            }
            else if(arr[i]%7 == 0){
                temp[7]++;
                arr[i] = 7;
            }
            else if(arr[i]%11 == 0){
                temp[11]++;
                arr[i] = 11;
            }
            else if(arr[i]%13 == 0){
                temp[13]++;
                arr[i] = 13;
            }
            else if(arr[i]%17 == 0){
                temp[17]++;
                arr[i] = 17;
            }
            else if(arr[i]%19 == 0){
                temp[19]++;
                arr[i] = 19;
            }
            else if(arr[i]%23 == 0){
                temp[23]++;
                arr[i] = 23;
            }
            else if(arr[i]%29 == 0){
                temp[29]++;
                arr[i] = 29;
            }
            else if(arr[i]%31 == 0){
                temp[31]++;
                arr[i] = 31;
            }
        }
        ll var = 1;
        for(ll i=0;i<=31;i++)
            if(temp[i])
                temp[i] = var++;
        cout<<var-1<<endl;;
        for(ll i=0;i<n;i++)
            cout<<temp[arr[i]]<<" ";
        cout<<endl;
    }
    return 0;
}
