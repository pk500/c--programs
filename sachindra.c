/*
input:- 1
output:-

*
input:- 3
output:-

*##
#**
*##
input:- 11
output:-

*##########
#########**
***########
#######****
*****######
#####******
*****######
#######****
***########
#########**
*##########



*/
#include<stdio.h>
int main()
{
    int i=0,n,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i<=(n/2)+1)
        {
                if(i%2!=0)
                {
                    for(j=1;j<=i;j++)
                    {
                        printf("*");
                    }
                    for(j=i+1;j<=n;j++)
                    {
                        printf("#");
                    }

                }
                if(i%2==0)
                {
                    for(j=1;j<=n-i;j++)
                    {
                        printf("#");
                    }
                    for(j=n-i+1;j<=n;j++)
                    {
                        printf("*");
                    }

                }
                printf("\n");


        }
        else
        {
                 if(i%2!=0)
                {
                    for(j=1;j<=(n-i)+1;j++)
                    {
                        printf("*");
                    }
                    for(j=(n-i)+1+1;j<=n;j++)
                    {
                        printf("#");
                    }

                }
                if(i%2==0)
                {
                    for(j=1;j<=n-(n-i+1);j++)
                    {
                        printf("#");
                    }
                    for(j=n-(n-i+1)+1;j<=n;j++)
                    {
                        printf("*");
                    }

                }
                printf("\n");



        }

    }
}
