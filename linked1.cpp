#include<iostream>
using namespace std;
class Chain;
class Chainnode
{
    friend class Chain;
    private:
     int data;
     Chainnode *link;
    public:
     Chainnode(int d=0,Chainnode *next=0)
     {
        data=d;
        link=next;
     }
     
};
class Chain
{
    private:
     Chainnode *head=NULL;
    public:
     void insertFront(int item)
     {
        Chainnode *newnode =new Chainnode(item);
        if(head==NULL)
          head=newnode;
        else
        {
            newnode->link=head;
            head=newnode;
        }
     }
      void display()
     {
         Chainnode *trav=head;
         cout<<"list contains:";
         while(trav!=NULL)
         {
             cout<<trav->data<<" ";
             trav=trav->link;
         }
         cout<<endl;
     }
    
};
int main()
{
    int item,n,x;
    cout<<"give your size of list:";
    cin>>n;
    Chain c1;
    cout<<"enter head values"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        c1.insertFront(x);
    }
    cout<<"Enter item which you to want to be head"<<endl;
    cin>>item;
    c1.insertFront(item);
    c1.display();
    return 0; 
}
