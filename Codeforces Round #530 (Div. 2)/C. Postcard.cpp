#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
using namespace std;
struct node{
    char data;
    node *next;
};
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=0;
    int st=0,as=0;
    node *head=NULL,*temp;
    for(int i=0;i<s.size();i++){
        node *p=new node;
        p->data=s[i];
        p->next=NULL;
        if(head==NULL){
            head=p;
            temp=p;
        }
        else
        {
            temp->next=p;
            temp=temp->next;
        }
        if(s[i]=='?' && n!=0)
            st++;
        else if(s[i]=='*' && n!=0)
            as++;
        else if(s[i]!='*' && s[i]!='?')
            n++;
    }
  //  cout<<n<<" "<<as<<" "<<st<<endl;
    if(n-as-st>k)
    {
        cout<<"Impossible";
        return 0;
    }
    if(as==0 && k>n)
    {
        cout<<"Impossible";
        return 0;
    }

  //  temp=head;
  //  while(temp!=NULL)
  //  {
  //      cout<<temp->data;
 //       temp=temp->next;
  //  }
  //cout<<n<<" "<<as<<" "<<st;
    temp=head;
    node *temp1=NULL;
    while(temp!=NULL && temp->next!=NULL)
    {
        if(n>k && (temp->next->data=='?' || temp->next->data=='*'))
        {
           //     cout<<0<<endl;
                n--;
                if(temp1==NULL)
                {
                  //  cout<<-1<<endl;
                    head=temp->next->next;
                    temp=head;
                    continue;
                }
                temp=temp->next->next;
                temp1->next=temp;
                continue;
        }
        else if(temp->next->data=='*' && n<k)
        {
            int a=k-n;
            char q=temp->data;
            for(int h=0;h<a;h++)
            {
                node *p=new node;
                p->data=q;
                p->next=temp->next;
                temp->next=p;
                temp=p;
            }
            break;
        }
        else
        {
        //    cout<<1<<endl;
            temp1=temp;
            temp=temp->next;
        }
        if(n==k)
            break;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data=='?' || temp->data=='*'){
            temp=temp->next;
            continue;
        }
        else
            cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}
