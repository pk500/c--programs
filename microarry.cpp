#include<iostream>
using namespace std;
int main()
{
    int a[]={2,2,0,4,0,8};
    int s=sizeof(a)/sizeof(a[0]);
    //cout<<s;
    for(int i=0;i<s;i++)
    {
        int j=i+1;
        if(a[j]!=0&&a[j]==a[i])
        {
            a[i]=a[i]+a[j];
             a[j]=0;
        }
    }

   for(int i=1;i<s;i++)
    {

      int j=i-1,p=a[i];
      while(j>=0&&a[j]==0)
      {
          a[j+1]=a[j];
          j--;
      }
      a[j+1]=p;     
    }

    for(int i=0;i<s;i++)
    {
       cout<<a[i];
    }
    return 0;
}
