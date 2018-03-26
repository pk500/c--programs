#include<conio.h>
#include<iostream.h>
int factorial(int);
int main()
{
int n,k,ncr,npr,i,result;
long t;
clrscr();
cout<<"enter the no. of cases \n";
cin>>t;
for(i=1;i<=t;i++)
{
cout<<"enter the values of n and k\n";
cin>>n>>k;
n=n/2;
k=k/2;
ncr=factorial(n)/((factorial(k))*factorial(n-k));
npr=factorial(n)/(factorial(n-k));
result=ncr+npr;
cout<<result;
}
getch();
return(0);
}
int factorial(int x)
{ int s=1,j;
for(j=1;j<=x;j++)
{s=j*s;
}
return(s);
}