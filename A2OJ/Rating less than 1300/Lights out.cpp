#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    int arr1[3][3];
    int p;
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }
    p=arr[0][0]+arr[0][1]+arr[1][0];
    if(p%2!=0)
        arr1[0][0]=0;
    else
        arr1[0][0]=1;
    p=arr[0][1]+arr[0][0]+arr[1][1]+arr[0][2];
    if(p%2!=0)
        arr1[0][1]=0;
    else
        arr1[0][1]=1;
    p=arr[0][1]+arr[0][2]+arr[1][2];
    if(p%2!=0)
        arr1[0][2]=0;
    else
        arr1[0][2]=1;
    p=arr[1][0]+arr[1][1]+arr[2][0]+arr[0][0];
    if(p%2!=0)
        arr1[1][0]=0;
    else
        arr1[1][0]=1;
    p=arr[1][1]+arr[1][0]+arr[1][2]+arr[0][1]+arr[2][1];
    if(p%2!=0)
        arr1[1][1]=0;
    else
        arr1[1][1]=1;
    p=arr[1][2]+arr[0][2]+arr[2][2]+arr[1][1];
    if(p%2!=0)
        arr1[1][2]=0;
    else
        arr1[1][2]=1;
    p=arr[2][0]+arr[1][0]+arr[2][1];
    if(p%2!=0)
        arr1[2][0]=0;
    else
        arr1[2][0]=1;
    p=arr[2][1]+arr[1][1]+arr[2][0]+arr[2][2];
    if(p%2!=0)
        arr1[2][1]=0;
    else
        arr1[2][1]=1;
    p=arr[2][2]+arr[2][1]+arr[1][2];
    if(p%2!=0)
        arr1[2][2]=0;
    else
        arr1[2][2]=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr1[i][j];
        cout<<endl;
    }

    return 0;
}
