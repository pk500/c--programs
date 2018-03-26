#include<bits/stdc++.h>
using namespace std;
bool a[10][10];
void initializer()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            a[i][j]=0;
        }
    }
}
void disply(int v)
{
    cout<<"**************output**************\n";
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
           cout<<a[i][j];
        }
        cout<<"\n";
    }
}

int main()
{
    int v,e,x,y;
    cout<<"enter total n of vertesis and edges:\n";
    cin>>v>>e;
    initializer();
    cout<<"\nenter vertex pair";
    for(int i=1;i<=e;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
    }
    disply(v);

    return 0;

}
