#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k=0,count=0;
    cin>>n>>m;
            int a;
    vector < vector<int> >arr(n);
    int arr2[100]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++){
            cin >> a;
            arr[i].push_back(a);
        }
    }
    for(int i=1;i<=m;i++)
    {
        int flag=1;
        for(int j=0;j<n;j++)
        {
            if(i>=arr[j][0] && i<=arr[j][1])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
                count++;
                arr2[k]=i;
                k++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<k;i++)
        cout<<arr2[i]<<" ";

}
