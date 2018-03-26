#include<iostream>
using namespace std;

int max(int a, int b)
{return a>=b?a:b;
}


int main()
{
    int n;
    cin>>n;

    int w[n],tw=0;
    long long int c[n];

    for(int i=0;i<n;i++)
    {
        cin>>w[i]>>c[i];
        tw+=w[i];

    }
   // cout<<tw;

    int ks[n+1][tw+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=tw;j++)
        {
            if(i==0||j==0)
            {
                ks[i][j]=0;

            }

            else if(w[i-1]<=j)
               {ks[i][j]=max(c[i-1]+ks[i-1][j-w[i-1]],ks[i-1][j]);

                }
            else
               { ks[i][j]=ks[i-1][j];


                }
        }


    }


    for(int i=0;i<=tw;i++)
    {if(i!=0)
        cout<<ks[n][i]<<" ";

    }

return 0;

}

