#include<iostream>
#include<fstream>
using namespace std;
int main()
{

//ofstream fout;
ifstream fin;
fin.open("abc.txt",ios::in);


char ch;

while(!fin.eof())
{
fin>>ch;
cout<<ch;
}





/*if(fin.eof()==0)
{
cout<<"not open";
}
else
cout<<"open";*/
fin.close();



return 0;

}
