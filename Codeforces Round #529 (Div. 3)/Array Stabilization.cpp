#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<min(arr[n-2]-arr[0],arr[n-1]-arr[1]);
    return 0;
}
