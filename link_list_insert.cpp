#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
using namespace std;

struct node
{
   int data;
   struct node *next;
};

//insertion at the bignig
void push(struct node** head_ref,int new_data)
{
   struct node* new_node=new node;
   new_node->data=new_data;

   new_node->next=(*head_ref);

   (*head_ref)=new_node;

}
//insert at the end
 void addAtEnd( struct node** head, int new_data)
 {  struct node *new_node,*last=*head;
    new_node=new node;
    new_node->next=NULL;
    new_node->data=new_data;

    if(*head==NULL)
    {*head=new_node;

     return;
    }

     while(last->next!=NULL)
        last=last->next;

      last->next=new_node;

    return;

 }

 //insert at after node
void insertafter(struct node* prev,int new_data)
{
  struct node* new_node;
  new_node=new node;
  new_node->data=new_data;
  new_node->next=prev->next;
  prev->next=new_node;
  return;

}

//count the no of node
int nodecount(struct node *head)
{
   struct node* currrent=head;
   if(!currrent)
   {
     return 0;
   }
   return 1+nodecount(currrent->next);

}
//find the cyle in list
bool findcycle(struct node* head)
{
  struct node *slow=head, *fast=head;
  while(slow&&fast&&fast->next){

      slow=slow->next;
      fast=fast->next->next;

     if(slow==fast)
     {
     return true;
     }

  }
  return false;
}

//print thr list
 void print(struct node* head)
 {
    while(head!=NULL)
    {
      cout<<head->data;
      head=head->next;
    }
 }


 int main()
 {
     struct node* head=NULL;

     push(&head,1);
     push(&head,2);
     push(&head,3);
     push(&head,4);
     push(&head,5);
     addAtEnd(&head,6);

     print(head);
     cout<<"\n";
     insertafter(head->next, 0);
     print(head);

     cout<<"\n"<<nodecount(head);
     head->next->next->next=head;
     cout<<"\n";
     cout<<findcycle(head);
     return 0;
 }
