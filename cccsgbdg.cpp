#include <vector>
#include <algorithm>
#include <list>
#include <iostream>

using namespace std;

void fac(vector &v,long N){
 long tmp,j;
 bool f;

 for(j=2;j*j1)
  v.push_back(N);
}

int main(){
 long i,j,k,l,temp,tmp;

 vectorv,v2,v3,v4,ans;
 vector::iterator it;
 bool f;

 for(i=100000;i<600000;){
  v.clear();
  fac(v,i);
  i++;
  if(v.size() >= 4){
   v2.clear();
   fac(v2,i);
   i++;
  }
  else
   continue;

  if(v2.size() >= 4){
   v3.clear();
   fac(v3,i);
   i++;
  }
  else continue;


  if(v3.size() >= 4){
   v4.clear();
   fac(v4,i);
   i++;
  }
  else continue;


  if(v4.size() >= 4){
   for(it = v.begin(); it != v.end();it++){
    ans.push_back(*it);
   }
   for(it = v2.begin(); it != v2.end();it++){
    ans.push_back(*it);
   }
   for(it = v3.begin(); it != v3.end();it++){
    ans.push_back(*it);
   }
   for(it = v4.begin(); it != v4.end();it++){
    ans.push_back(*it);
   }
   sort(ans.begin(), ans.end());

   bool con = true;

   for(it = ans.begin()+1;it != ans.end();it++){
    if(*it == *(it-1)){
     con = false;
     break;
    }
   }

   if(con){
    cout << i-4 << '\n';
    break;
   }
  }
 }

 return 0;
}
