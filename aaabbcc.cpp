#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="aaaabbccc";
    int c=0;
    for(int i=0;s[i]!='\0';i++)
    {
        int j=i+1;
        if(s[i]!=s[j])
        {
            cout<<s[i]<<c+1;
            c=0;
        }
        else
        {
            c++;

        }

    }
    return 0;
}
