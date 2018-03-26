#include<iostream>
int found(int ,int* );
int main()
{
int x,n[6]={1,3,6,7,4,2};

std::cout<<"enter the no. for searching";
std::cin>>x;
int s=found(x,n);
std::cout<<s;


return 0;

}
int found(int a,int arr[])
{
for(int j=0;j<6;j++)
  {if(a==arr[j])
   {//std::cout<<"found";
  return 1;
   }
  }

}
