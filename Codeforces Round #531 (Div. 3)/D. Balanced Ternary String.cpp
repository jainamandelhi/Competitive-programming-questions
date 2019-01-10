#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[3]={0,0,0};
    for(int i=0;i<n;i++)
        if(s[i]=='0')
            arr[0]++;
        else if(s[i]=='1')
            arr[1]++;
        else
            arr[2]++;
    int k0=n/3-arr[0];
    int k1=n/3-arr[1];
    int k2=n/3-arr[2];
    for(int i=0;i<n;i++)
    {
        if(k0>0)
        {
            if(s[i]=='1' && k1<0)
            {
                s[i]='0';
                k0--;
                k1++;
                if(k0==0)
                    break;
            }
            else if(s[i]=='2' && k2<0)
            {
                s[i]='0';
                k0--;
                k2++;
                if(k0==0)
                    break;
            }
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(k2>0)
        {
            if(s[i]=='1' && k1<0)
            {
                s[i]='2';
                k2--;
                k1++;
                if(k2==0)
                    break;
            }
            else if(s[i]=='0' && k0<0)
            {
                s[i]='2';
                k2--;
                k0++;
                if(k2==0)
                    break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(k1>0)
        {
            if(s[i]=='2' && k2<0)
            {
                s[i]='1';
                k2++;
                k1--;
                if(k1==0)
                    break;
            }
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(k1>0)
        {
            if(s[i]=='0' && k0<0)
            {
                s[i]='1';
                k0++;
                k1--;
                if(k1==0)
                    break;
            }
        }
    }
    cout<<s;
    return 0;
}
