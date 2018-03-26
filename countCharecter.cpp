#include<iostream>
#define max 256
using namespace std;
void charCount(char *str)
{

   int count[max];
int i;
/*for( i=0;*(str+i);i++)
{
count[*(str+i)]++;
//cout<<*(str+i)<<",";

}*/

 for (i = 0; *(str+i); i++)
        if(*(str+i)!=' ')
            count[*(str+i)]++;
 int n = i;

    // Print characters having count more than 0
    for (i = 0; i < n; i++)
        if (count[*(str+i)] == 1)
            cout<<str[i];

/*for(int i=0;*(str+i);i++)
{
cout<<"\n"<<count[*(str+i)]<<",";
}

*/

}

int main()
{
  char str[100];
  cin>>str;
  cout<<str;
  charCount(str);
return 0;
}
