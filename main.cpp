#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* next;
};
void add(struct node* &start)
{
    struct node* p=new struct node;
    cout<<"Enter the data "<<endl;
    cin>>p->data;
    p->next=NULL;
    if(start==NULL)
        start=p;
    else
    {
        struct node*q=new struct node;
        q=start;
        while(q->next!=NULL)
        {


            q=q->next;
        }
        q->next=p;

    }

}
void display(struct node* &start)
{
    struct node* q=new struct node;
    if(start==NULL)
        cout<<"Linked list is empty, nothing to be displayed"<<endl;
    else
        {
            q=start;
            while(q!=NULL)
            {
                cout<<q->data<<endl;
                q=q->next;
            }
        }

}
void dr(struct node* &start)
{
    struct node* q=new struct node;
    q=start;
    if(q==NULL)
        return;
    else{
        cout<<q->data<<endl;
        dr(q->next);
    }
}
void revlist(struct node* &start)
{
    struct node* q=new struct node;
    q=start;
    if(q==NULL)
        return;
    else
    {

        revlist(q->next);
        cout<<q->data<<endl;
    }
}
void march(struct node* &start)//Reversing the linked list.
{
    struct node* q=new struct node;
    struct node* o=new struct node;
    struct node* r=new struct node;
    o=NULL;
    q=NULL;
    r=start;

    while(r!=NULL)
    {
        cout<<o<<" "<<q<<" "<<r<<endl;
       o=q;
       q=r;


       r=r->next;
       q->next=o;

    }
    start=q;
}

int main()
{
    struct node* start=NULL;
    struct node* p=NULL;
    struct node* q=NULL;
    struct node* r=NULL;
    int choice;
    char ch='y';
    while(ch=='y'){
    cout<<"Enter\n1.To add elements to a linked list\n2.To display elements of the linked list.\n3.To display the linked list with recursion.\n4.To reverse the linked list with recursion.\n5.To reverse linked list by march of pointers."<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        add(start);
        break;

    case 2:
        display(start);
        break;
    case 3:
        dr(start);
        break;
    case 4:
        revlist(start);
        break;
    case 5:
        march(start);

    }
    cout<<"Do you want to continue enter y or n?"<<endl;
    cin>>ch;
    }
    return 0;






}
