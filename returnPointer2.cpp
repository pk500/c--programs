#include<iostream>
using namespace std;
int *min(int *,int *);
int main()
{
int a=2,b=3,*c;
c=min(&a,&b);
cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<*c;

return 0;
}
int *min(int *a,int *b)
{
if(*a<*b)
{
return a;
}else
return b;
}
