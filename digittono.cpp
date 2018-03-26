#include <stdio.h>
#include<iostream>
using namespace std;

int main() {

   // int t=0;
   // scanf("%d",&t);
  //  while(t)
   // {
        int n,a[4],i=0;
        char *singledigit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
        char *twodigit[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
        char *tenthdight[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        char *tenthpow[]={"thousand","hundred"};
        scanf("%d",&n);
        int num=n;
        while(num!=0)
        {
            a[3-i]=num%10;
            num/=10;
            i++;
        }


        if(i==0)
            {
                cout<<singledigit[0];


            }
            else
            {
                for(int i=0;i<4;i++)
                {
                    //cout<<a[i];
                    if(a[i]==0)
                    {
                        if(i!=3)
                        continue;
                        else
                        cout<<singledigit[0]<<" ";

                    }
                    else
                    {
                        if(i==0)
                        {
                            cout<<singledigit[a[i]]<<" "<<tenthpow[i];
                        }
                    }

                }
            }


      //  t--;
   // }


	return 0;
}
