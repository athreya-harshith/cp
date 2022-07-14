#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * link;
};
class list
{
    node *first;
    public : list();
            void ins_rear();
            void del_rear();
            void display() const;
};
list::list():first(NULL){}
void list::ins_rear()
{
    node *t=NULL;
    t=new node;
    cout<<"Enter the Value\n";
    cin>>t->data;
    if(first==NULL)
    {
        first=t;
    }
    else
        {
            node *t1;
            for(t1=first; t1->link!=NULL;t1=t1->link);
            t1->link=t;
            t->link=NULL;
        }
}
void list::del_rear()
{
    if(first==NULL)
    {
        cout<<"Empty LL\n";
        return;
    }
    if(first->link==NULL)
    {
        node *t=first;
        cout<<"The Deleted  information is \t"<<t->data<<endl;
        delete t;
        first=NULL;
        return;
    }
    node *t;
    for(t=first;t->link->link!=NULL;t=t->link);
    node *t1=t->link;
    cout<<"The Deleted information is \t"<<t1->data<<endl;
    t->link=NULL;
    delete t1;
    
}
void list::display() const
{
    if(first==NULL)
    {
        cout<<"LL is Empty\n";
        return ;
    }
    cout<<"LL contents are\n";
    for(node *t=first;t!=NULL;t=t->link)
    {
        cout<<t->data<<" ";
    }
    cout<<endl;
    first->data=23;
    cout<<first->data<<endl;// even though decalred as const the memory contents pointed by the first pointer is a modifiable entity
    // first = first->data; but on changing the contets of first pointer, it throws the error 
}
int main()
{
    list c;
    while(1)
    {
        int ch;
        cout<<"1.insert rear\n delete rear\n display \n insert front \n delete front\n";
        cin>>ch;
        switch(ch)
        {
            case 1:c.ins_rear();
                    break;
            case 2:c.del_rear();
                    break;
            case 3:c.display();
                    break;
            default:exit(0);
        }
    }
}