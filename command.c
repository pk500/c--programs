#include<stdio.h>
int str2int(char*);
int main(int n,char *x[])
{
int a,b,c;
a=str2int(x[1]);
printf(" numbers %d",a);
b=str2int(x[2]);
c=a+b;
printf("\nSum of two numbers %d\n",c);
return 0;
}
int str2int(char *s)
{
int i,n;
for(n=0,i=0;s[i]!='\0';i++)   /* extracting characters */
n=n*10+((int)s[i]-54);    /* converting and concatenating to number */
return n;
}