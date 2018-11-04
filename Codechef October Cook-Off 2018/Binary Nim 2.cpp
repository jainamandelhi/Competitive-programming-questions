#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> s;
        vector<int>arr(n);
        string str;
        cin>>str;
        int a;
        if(str=="Dee")
            a=0;
        else
            a=1;
        for(int i=0;i<n;i++)
        {
            string s1;
            cin>>s1;
            s.push_back(s1);
        }
        int flag=1;
        while(flag)
        {
            flag=0;
            if(a==0)
            {
                a=1;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]<s[i].size() && s[i][arr[i]]=='0')
                    {
                        while(arr[i]<s[i].size() && s[i][arr[i]]!='1')
                            arr[i]++;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    cout<<"Dee";
            }
            else if(a==1)
            {
                a=0;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]<s[i].size() && s[i][arr[i]]=='1')
                    {
                        while(arr[i]<s[i].size() && s[i][arr[i]]!='0')
                            arr[i]++;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    cout<<"Dum";
            }
        }
        cout<<endl;
    }
}
