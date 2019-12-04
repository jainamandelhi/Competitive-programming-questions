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
    ll n;
    cin>>n;
    ll a=0,b=0;
    string s="";
    ll arr[n];
    ll arr1[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        cin>>arr1[i];
    }
    for(ll i=0;i<n;i++)
    {
        ll p=arr[i];
        ll q=arr1[i];
        if(i==0)
        {
            a+=p;
            s+='A';
            continue;
        }
        if(abs(a+p-b)>500){
            b+=q;
            s+='G';
        }
        else if(abs(b+q-a)>500){
            a+=p;
            s+='A';
        }
        else
        {
            if(p<q){
                a+=p;
                s+='A';
            }
            else{
                b+=q;
                s+='G';
            }
        }
    }
    if(abs(a-b)<=500)
    {
        cout<<s;
        return 0;
    }
    a=0,b=0;
    s="";
    for(ll i=0;i<n;i++)
    {
        ll p=arr[i];
        ll q=arr1[i];
        if(i==0)
        {
            b+=q;
            s+='G';
            continue;
        }
        if(abs(a+p-b)>500){
            b+=q;
            s+='G';
        }
        else if(abs(b+q-a)>500){
            a+=p;
            s+='A';
        }
        else
        {
            if(p<q){
                a+=p;
                s+='A';
            }
            else{
                b+=q;
                s+='G';
            }
        }
    }
    if(abs(a-b)<=500)
    {
        cout<<s;
        return 0;
    }
    cout<<-1;
}
