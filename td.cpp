#include<iostream>
using namespace std;
float a[10][10],r[10][10];
float avg(int i,int j)
{
    float sum=0;
    for(int p=i; p<=i+1; p++)
    {
        for(int q=j; q<=j+1; q++)
        {
            sum+=a[p][q];

        }

    }
    return sum/4;

}
float avgb(int i,int j)
{
    float sum=0;

        for(int q=j; q<=j+1; q++)
        {
            sum+=a[i][q];


        }


    return sum/2;

}
float avgr(int i,int j)
{
    float sum=0;

        for(int q=i; q<=i+1; q++)
        {
            sum+=a[q][j];


        }


    return sum/2;

}
int main()
{

   int r0=0,c=0;
   cout<<"enter no of row and col:\n";
   cin>>r0>>c;
   cout<<"\nenter element:-\n";
     for(int i=1; i<=r0; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cin>>a[i][j];
        }

    }
     for(int i=1; i<=r0; i++)
    {
        for(int j=1; j<=c; j++)
        {

            if(i<r0&&j<c)
            {
                r[i][j]=avg(i,j);
            }
            else if(i==r0&&j<c)
            {
                r[i][j]=avgb(i,j);
            }
             else if(i<r0&&j==c)
            {
                r[i][j]=max(i,j);
            }
            else
               r[i][j]=a[i][j];
        }

    }





    for(int i=1; i<=r0; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cout<<r[i][j]<<"\t";
        }
        cout<<"\n";
    }






    return 0;

}
