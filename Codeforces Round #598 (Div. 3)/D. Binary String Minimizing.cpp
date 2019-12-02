#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<string>arr1;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++){
        string a=to_string(i);
        if(s[i]=='0')
            arr1.pb(a);
    }
    ll k=arr1.size();
    //cout<<k<<endl;
    //for(ll i=0;i<k;i++)
    //    cout<<arr1[i]<<" ";
   // cout<<endl;
    for(ll i=0;i<k;i++)
    {
        if(i==0)
        {
            ll temp = m-(stoi(arr1[i]));
            if(temp<0){
                arr1[i]=to_string(stoi(arr1[i])-m);
                break;
            }
            m=m-stoi(arr1[i]);
            arr1[i]='0';
            //cout<<m<<endl;
            continue;
            //cout<<i<<" "<<m<<endl;
        }
        ll temp=m-(stoi(arr1[i])-stoi(arr1[i-1]))+1;
        if(temp<0)
        {
            arr1[i]=to_string(stoi(arr1[i])-m);
            break;
        }
        m=temp;
        arr1[i]=to_string(stoi(arr1[i-1])+1);
    }
    //for(ll i=0;i<k;i++)
     //   cout<<stoi(arr1[i])<<" ";
    //cout<<endl;
    string arr2="";
    for(ll i=0;i<n;i++)
        arr2.pb(' ');
    for(ll i=0;i<k;i++)
        arr2[stoi(arr1[i])]='0';
    for(ll i=0;i<n;i++)
        if(arr2[i]!='0')
            cout<<1;
        else
            cout<<0;
        cout<<endl;
    }
}
