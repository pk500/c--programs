#include<iostream.h>
int main()
{
    int a=10,b;
    b=(a++ )+ (++a);
    cout<<b;
    //printf("%d,%d",b,a);
    return 0;
}
