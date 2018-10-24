#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    if(n==1)
    {
        if(arr[0]*2>=arr1[0])
            cout<<-1;
        else
            cout<<arr[0]*2;
        return 0;
    }
    int a=2*arr[0];
    if(a<=arr[n-1] && arr[n-1]<arr1[0])
        cout<<arr[n-1];
    else if(a>=arr[n-1] && a<arr1[0])
        cout<<a;
    else
        cout<<-1;
}
