#include "bits/stdc++.h"
using namespace std;
int main()
{
int t,a,b;
cin>>t;
char s[100000];
for(int i=0;i<t;++i){
cin>>s>>a>>b;
sort(s+a,s+b+1,greater<int>());
cout<<s<<endl;

}
return 0;
}
