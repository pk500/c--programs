#include<iostream>
using namespace std;
void swap(int *, int *);
int main()
{
 int a=5, b=6;
 cout<<a<<b;
 swap(&a,&b);


  cout<<a<<b;
 return 0;
}

 void swap(int *x, int *y)
  { cout<<"\n"<<*x<<&x<<"\n"<<*y<<&y;

  int **temp;
  temp=&x;
  *x=&y;
  *y=&temp;
  cout<<"\n"<<*x<<&x<<*y<<&y;
  }
