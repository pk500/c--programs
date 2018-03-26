#include<stdio.h>
int main()
{
   long long int n1,n2,l,s,i=1,r=0;
    scanf("%d%d",&n1,&n2);
    printf("lcm");
    l=n1>=n2?n1:n2;
    s=n1<=n2?n1:n2;
    while(1)
    {


        if(l*i%s==0)
        {
            printf("\nlcm%d\n",l*i);
            break;
        }
       i++;


    }
    i=s;
    while(i)
    {
        if(n1%i==0&&n2%i==0)
        {
            printf("\nlcm%d\n",s/2);
            break;
        }
       i--;
    }

    return 0;

}
