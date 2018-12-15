#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1="CODEFORCES";
    int j=0,flag=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s1[j]){
            if(c==1 && j!=10)
            {
                int k=j,p=0;
                for(int q=s.size()-1;q>=i;q--)
                {
                    if(s[q]==s1[9-p]){
                        p++;
                        k++;
                    }
                    else
                    {
                        cout<<"NO";
                        return 0;
                    }
                    if(k==10)
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
                cout<<"NO";
                return 0;
            }
            j++;
            flag=0;
        }
        else if(flag==0)
        {
            flag=1;
            c++;
        }
        if(j==10 && c==1)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
