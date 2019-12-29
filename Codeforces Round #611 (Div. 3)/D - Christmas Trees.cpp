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
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    ll cost=0;
    set<ll>ma,ma1,ma2;
    set<ll>::iterator itr;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        ma.insert(arr[i]);
    }
    ma1=ma;
    //sort(arr,arr+n);
    vector<ll>arr1;
    ll i=0,d=1,flag=0;
    while(arr1.size()<m)
    {
        if(flag==0){
        for(itr=ma1.begin();itr!=ma1.end();itr++){
        ll a=*itr;
        ll b=a+1;
        a--;
       // if(i==0)
       // {
       //     cost+=d;
      //     arr1.pb(arr[i]-d);
       //     ma[arr[i]-d]++;
         //   i++;
           // continue;
        //}
        if(ma.find(a)==ma.end())
        {
            arr1.pb(a);
            ma2.insert(a);
            ma.insert(a);
            cost+=d;
            if(arr1.size()>=m)
                break;
        }
        if(ma.find(b)==ma.end())
        {
            arr1.pb(b);
            ma2.insert(b);
            ma.insert(b);
            cost+=d;
            if(arr1.size()>=m)
                break;
        }
        }
        ma1.clear();
        flag=1;
        }
        else
        {
        for(itr=ma2.begin();itr!=ma2.end();itr++){
        ll a=*itr;
        ll b=a+1;
        a--;
       // if(i==0)
       // {
       //     cost+=d;
      //     arr1.pb(arr[i]-d);
       //     ma[arr[i]-d]++;
         //   i++;
           // continue;
        //}
        if(ma.find(a)==ma.end())
        {
            arr1.pb(a);
            ma1.insert(a);
            ma.insert(a);
            cost+=d;
            if(arr1.size()>=m)
                break;
        }
        if(ma.find(b)==ma.end())
        {
            arr1.pb(b);
            ma1.insert(b);
            ma.insert(b);
            cost+=d;
            if(arr1.size()>=m)
                break;
        }
        }
        flag=0;
        ma2.clear();
        }
        d++;
    }
    //cost=0;
    //ll j=0;
   // sort(arr1.begin(),arr1.end());
   // for(ll i=0;i<n;i++)
   // {
   //     if(i==0)
    //    {
    //        while(arr[i]>=arr1[j])
    //        {
     //           cost+=abs(arr[i]-arr1[j]);
     //           j++;
    //        }
     //   }
        //else if(i==n-1)
       // {
         //   while(j<m)
         //   {
        //        cost+=abs(arr[i]-arr1[j]);
        //        j++;
         //   }
     //   }
        //else
        //{
         //   while(i>0 && arr1[j]<arr[i]){
         //       cost=cost+min(abs(arr1[j]-arr[i]),abs(arr1[j]-arr[i-1]));
         //       j++;
          //  }
        //}
   // }
   // while(j<m)
   // {
   //     cost+=abs(arr1[j]-arr[n-1]);
   //     j++;
   // }
    cout<<cost<<endl;
    for(ll i=0;i<m;i++)
        cout<<arr1[i]<<" ";
}
