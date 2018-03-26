#include<stdio.h>
#include<conio.h>
#include<math.h>
void add();
void sub();
void div();
void mul();
int main()
{

    add();
    //sub();
    //div();
    //mul();

    return 0;
}
void add()
{
    float m1,m2,m=0;
    int e1,e2,e=0,d=0,p=0;
    printf("foating point addition ");
    printf("\nenter the first no:-\n mendissa=");
    scanf("%f",&m1);
    printf("exponent=");
    scanf("%d",&e1);
    printf("enter the second no:-\n mendissa=");
    scanf("%f",&m2);
    printf("exponent=");
    scanf("%d",&e2);
    d=fabs(e2-e1);
    p=pow(10,d);
    if(e2<e1)
    {
        m2=m2/p;
        e=e1;
    }
    else if(e1<e2)
    {
        m1=m1/p;
        e=e2;
    }
    else
    {
        e=e1;
    }
    m=m1+m2;
    if(m>=1)
    {
        m=m/10;
        e=e+1;
    }
    if(e>99)
    {
        printf("the no is overflow!!!!!!!!!!!!!!!");
    }
    else
        printf("\nans:-\nmendissa=%f\nexponential=%d",m,e);
}
void sub()
{
    float m1,m2,m=0;
    int e1,e2,e=0,d=0,p=0;

    printf("foating point addition ");
    printf("\nenter the first no:-\n mendissa=");
    scanf("%f",&m1);
    printf("exponent=");
    scanf("%d",&e1);
    printf("enter the second no:-\n mendissa=");
    scanf("%f",&m2);
    printf("exponent=");
    scanf("%d",&e2);
    d=fabs(e2-e1);
    p=pow(10,d);
    if(e2<e1)
    {
        m2=m2/p;
        e=e1;
    }
    else if(e1<e2)
    {
        m1=m1/p;
        e=e2;
    }
    else
    {
        e=e1;
    }
    m=m1-m2;
    if(m>=1)
    {
        m=m/10;
        e=e+1;
    }
    if(e>99)
    {
        printf("the no is overflow!!!!!!!!!!!!!!!");
    }
    else
        printf("\nans:-\nmendissa=%f\nexponential=%d",m,e);
}
void mul()
{
    float m1,m2,m=0;
    int e1,e2,e=0,d=0,p=0;

    printf("foating point division ");
    printf("\nenter the first no:-\n mendissa=");
    scanf("%f",&m1);
    printf("exponent=");
    scanf("%d",&e1);
    printf("enter the second no:-\n mendissa=");
    scanf("%f",&m2);
    printf("exponent=");
    scanf("%d",&e2);
    m=m1*m2;
    e=e1+e2;
    if(e>99)
    {
        printf("the no is overflow!!!!!!!!!!!!!!!");
    }
    if(e<-99)
        printf("the no is under flow");
    printf("\nans:-\nmendissa=%f\nexponential=%d",m,e);
}
void div()
{
    float m1,m2,m=0;
    int e1,e2,e=0,d=0,p=0;

    printf("foating point division ");
    printf("\nenter the first no:-\n mendissa=");
    scanf("%f",&m1);
    printf("exponent=");
    scanf("%d",&e1);
    printf("enter the second no:-\n mendissa=");
    scanf("%f",&m2);
    printf("exponent=");
    scanf("%d",&e2);
    m=m1/m2;
    e=e1-e2;
    if(e>99)
    {
        printf("the no is overflow!!!!!!!!!!!!!!!");
    }
    if(e<-99)
        printf("the no is under flow");
    printf("\nans:-\nmendissa=%f\nexponential=%d",m,e);
}
