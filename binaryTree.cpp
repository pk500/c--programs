#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

struct node
{
  int data;
  struct node *left, *right;
};

struct node* creat(int new_data){

struct node* node1;
node1 =new node;
node1->left=NULL;
node1->right=NULL;
node1->data=new_data;
return node1;


}

void levelOrderTraversel(struct node* root)
{
   if(!root)
   {

     return;

   }

   queue<node* >q;
   q.push(root);
   while(q.empty()==false)
   {  struct node* node=q.front();

     cout<<node->data<<" ";
     q.pop();
     if(node->left!=NULL)
     q.push(node->left);
     if(node->right!=NULL)
     q.push(node->right);

   }

}

int main(){
struct node* root=creat(2);
root->left=creat(1);
root->left->left=creat(3);
root->left->right=creat(4);
root->right=creat(5);
root->right->left=creat(6);
 levelOrderTraversel(root);


}
