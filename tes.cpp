#include<iostream>
using namespace std;

char *max(int n,int *c){
for(int i=0;i<n;i++)
{cout<<*(c+i)<<"\n";
}
return "pankaj";
}
int main(){
char *output;
int a[]={1,2,34};
output=max(3,a);
cout<<"\n"<<output<<"\n"<<output;
return 0;


}
