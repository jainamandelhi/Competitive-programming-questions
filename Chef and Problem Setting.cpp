#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int a,b,d=-1,sum=0,flag=1;
        cin>>a>>b;
        cin.ignore();
        for(int i=0;i<a;i++)
        {
            string s;
            getline(cin,s);
            if(s[0]=='c')
            {
                for(int j=8;j<8+b;j++)
                {
                    if(s[j]=='0')
                        d=1;
                }
            }
            if(d==1 && flag)
            {
                cout<<"INVALID"<<endl;
                flag=0;
            }
            else if(s[0]=='w')
            {
                for(int j=6;j<6+b;j++)
                {
                    sum+=s[j]-'0';
                }
                if(sum==b && d!=1)
                    d=2;
                else
                    sum=0;
            }
        }
        if(flag)
        {
            if(d==2)
                cout<<"WEAK"<<endl;
            else
                cout<<"FINE"<<endl;
        }
    }
    return 0;
}
