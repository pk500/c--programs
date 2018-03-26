#include <iostream>
using namespace std;
namespace First{
   void sayHello(){
      cout << "Hello First Namespace" << endl;
   }
}
namespace Second{
   void sayHello(){
      cout << "Hello Second Namespace" << endl;
   }
}



int main () {
namespace First f;
   f::sayHello();
    Second::sayHello();
   return 0;
}
