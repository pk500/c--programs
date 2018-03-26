#include<iostream>
#include<stdio.h>
using namespace std;

struct linklist
{int data;
struct linklist *next;
};

linklist *creat(int info)
{ linklist *node;
node=new linklist;
node->data=info;
node->next=NULL;
return node;
}

void print(linklist* start)
{
  while(start!=NULL)
 {
 cout<<start->data;
start=start->next;
}
}

int main()
{
linklist *start,*node[10];
Node[0]=creat(7);

/*for(int i=1;i<10;i++)
{int info;
//cin>> info;
node[i]=creat(i);
node[i]->next=node[i];

}*/

print(start);


return 0;
}
