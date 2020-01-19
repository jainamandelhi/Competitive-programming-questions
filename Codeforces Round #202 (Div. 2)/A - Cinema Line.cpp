#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==25)
        {
            m[a]++;
            continue;
        }
        else if(a==50)
        {
            if(m[25]<1)
            {
                cout<<"NO";
                return 0;
            }
            else
            {
                m[a]++;
                m[25]--;
            }
            continue;
        }
        else
        {
            if((m[25]<1 || m[50]<1) && m[25]<3)
            {
                cout<<"NO";
                return 0;
            }
            else
            {
                m[a]++;
                if(m[25]<1 || m[50]<1)
                {
                    m[25]-=3;
                    continue;
                }
                m[50]--;
                m[25]--;
            }
        }
    }
    cout<<"YES";
    return 0;
}
