#include<bits/stdc++.h>
using namespace std;

int finddaynum(string s)
{
    if(s=="mon")
    {
        return 1;
    }
    if(s=="tue")
    {
        return 2;
    }
    if(s=="wed")
    {
        return 3;
    }
    if(s=="thurs")
    {
        return 4;
    }
    if(s=="fir")
    {
        return 5;
    }
    if(s=="sat")
    {
        return 6;
    }
     if(s=="sun")
    {
        return 7;
    }
}


int main()
{
    long int t;
    cin>>t;
    while(t--)
    {   int r[7]={4,4,4,4,4,4,4};
        int w,day;
       string s;
        cin>>w>>s;
        int n=w-28;

        day= finddaynum(s)-1;
        //cout<<day<<"\n";
        if(n==1)
        {
           r[day]=5;
        }
         if(n==2)
        {
            if(day<6)
            {r[day]=5;
            r[day+1]=5;
            }else
            {r[day]=5;
             r[0]=5;

            }

        }
        if(n==3)
        { //cout<<"hi";

            if(day<5)
            {r[day]=5;
             r[day+1]=5;
             r[day+2]=5;
            }
            else if(day<6)         
            {r[day]=5;
             r[day+1]=5;
             r[0]=5;

            }
            else
                {
                    r[day]=5;

                    r[0]=5;
                     r[1]=5;

                }

        }

        for(int i=0;i<7;i++)
        {
             printf("%d ",r[i]);
        }
        cout<<"\n";

    }
    return 0;

}
