#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
/*
char ch,str[10];
cout<<"enter char\n";
cin>>ch;                            // a
cout<<"enter string\n";
cin>>str;                           //pankaj
cout<<"1.chat and 2.string\n";       // output: a pankaj
cout<<ch<<"\n"<<str;


*
char ch,str[10];
cout<<"enter char\n";
cin>>ch;                    //pankaj
cout<<"enter string\n";
cin>>str;                   //pankaj
cout<<"*******output:-1.chat and 2.string*********\n";
cout<<ch<<"\n"<<str;            //output: p ankaj
*/
/*
char ch,str[15];
cout<<"enter char\n";
cin>>ch;                    //pankaj
cout<<"enter string\n";
cin>>str;                   //pankaj kumar
cout<<"*******output:-1.chat and 2.string*********\n";
cout<<ch<<"\n"<<str;        //output: p pankaj
*/

char ch,str[15];
cout<<"enter char\n";
cin>>ch;                    //pankaj
cout<<"enter string\n";
//cin.getline(str,15);                   //pankaj kumar

gets(str);
cout<<"*******output:-1.chat and 2.string*********\n";
cout<<ch<<"\n"<<str;
return 0;
}
