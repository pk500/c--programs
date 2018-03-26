#include<stdio.h>
#include<iostream>
//#include<conio.h>
struct link
{int a;
struct link *next;
};
int main()
{int i,a;
struct *node1,*node2,*head,*node;
node=(struct link*)malloc(sizof(struct link));
node1=(struct link*)malloc(sizof(struct link));
node2=(struct link*)malloc(sizof(struct link));
//node=(struct link*)malloc(sizof(struct link));
    //clrscr();
node->a=10;
node1->a=23;
node2->a=43;
head=node;
node->next=node1;
node1->next=node2;
node2->next=NULL;
while(head!=NULL)
{printf("%d",head->a);
head->next;
}
getch();
}
