#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
void fun(vector<int>arr,int i,int sum)
{
    if(i==arr.size())
    {
        if(sum%360==0){
        cout<<"YES";
        exit(0);
        }
        else
            return;
    }
    fun(arr,i+1,sum+arr[i]);
    fun(arr,i+1,sum-arr[i]);
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    fun(arr,0,0);
    cout<<"NO";
    return 0;
}
