#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int dpf(long n)
{
       int i,c=0;
       long p=1;
       if(primis(n))
              return 1;
       for(i=2;i<=n/2;i++)
       {
              if(p*i > n)
                     break;
              if(n%i==0 && primis(i))
              {
                     p*=i;
                     c++;
              }
       }
       return c;
}

int primis(long n)
{
       int i;
       for(i=2;i<=(long)sqrt((double)n);i++)
              if(n%i==0)
                     return 0;
       return 1;
}


int main()
{
       long c=4,i,j;
       int f;

       for(i=2;;i++)
       {
              f=1;
              for(j=0;j<c;j++)
                     if(!(c==dpf(i+j)))
                     {
                           f=0;
                           break;
                     }

              if(f)
              {
                     printf("%d",i);
                     break;
              }
       }


}

