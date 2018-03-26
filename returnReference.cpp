#include<iostream>
using namespace std;
int &min(int &,int &x);
int main()
{
int a=2,b=3;
min(a,b)=-1;
cout<<a<<b;

return 0;
}
int &min(int &a,int &b)
{
if(a<b)
{
return a;
}else
return b;
}
