#include<stdio.h>
#include<conio.h>

void main(){
int b[1][2]={10,20,30,40,50,20,30,40,50,60};
int j,i;
clrscr();
for(i=0;i<=4;i++){
for(j=0;j<=4;j++){
printf("%d\n",*(*(b+i)+j));
}                 }
getch();
}