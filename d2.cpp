#include<iostream>
using namespace std;
int main()
{ int a[2][2];
cout<<"enter value******\n";
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
 cin>>a[i][j];
}

}

cout<<"\n*****your values are*****\n";
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
 cout<<a[i][j];
}
cout<<"\n";

}
return 0;
 }
