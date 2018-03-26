#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
bool ispalingdrom(int x)
{
   // cout<<x<<"\n";
    int y=x,s=0;
    while(x)
    {

        s=(s*10)+(x%10);
        x/=10;
    }
   // cout<<s<<"\n";
     if(s==y)
     {
         return 1;
     }
     return 0;

}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n=999*999;
       // cin >> n;
        while(n)
        {
            if(ispalingdrom(n))
            {
                cout<<n<<"\n";
                break;
            }
            n--;
        }
    }
    return 0;
}

