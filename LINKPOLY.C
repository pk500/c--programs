#include<stdio.h>
//#include<conio.h>
#include<alloc.h>
void creat();
void travers();
struct node
{int cof;
int exp;
struct node *next;
}*head;
void main()
{clrscr();
creat();
travers();
getch();
}
void creat()
{struct node *fnode,*onode;  //fnode= first node ,onode=other nodes
char ch;//y,Y;
fnode=(struct node*)malloc(sizeof(struct node));
printf("enter the first cofficent and exponent=\n");
scanf("%d  %d",&fnode->cof,&fnode->exp);
head=fnode;
do
{onode=(struct node*)malloc(sizeof(struct node));
printf("\nenter the cofficent and exonent=\n");
scanf("%d   %d",&onode->cof,&onode->exp);
fnode->next=onode;
fnode=onode;
printf("\nif you wants to more entery then enter y for yes or not for n\n");
ch=getch();
}while(ch=='y'||ch=='Y');
fnode->next=NULL;
}

void travers()
{struct node *ptr;
ptr=head;
printf("f(x)=");
while(ptr!=NULL)
{printf("+(%d)x^(%d)",ptr->cof,ptr->exp);
ptr=ptr->next;
}
}
