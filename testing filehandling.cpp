#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fin;
    fin.open("abc",ios::in|ios::out);
    fin<<"aaaaaaaaaaaaaa skdjfkjnerkjnfvajbrofnam SVC<Mv kanbhdbvj sdm vn kadjfgvurea vn S XvbchjVJDV c jksbdfsa dvbahdsB vKDNSvkjbhjSVDv asNDvkjbIBDS vm JV";
     char ch;
     int s=fin.tellg();

         cout<<"\n"<<s;

       fin.seekg(0);

       fin.get(ch);
       fin.get(ch);
       fin.get(ch);
       fin.get(ch);

      s=fin.tellg();
     cout<<"\n"<<s<<" "<<ch;
         s=fin.tellp();
          fin.get(ch);
       fin.get(ch);
     cout<<"\n"<<s<<" "<<ch;
      s=fin.tellg();
       fin.get(ch);
       fin.get(ch);
     cout<<"\n"<<s<<" "<<ch;
      s=fin.tellp();
      int g=fin.tellg();
     cout<<"\n"<<s<<" "<<g;
     char sp[10]="hi pankaj";
    fin<<sp;
     cout<<sp<<"\n";

 fin>>sp;

     cout<<sp;

    fin.close();

    return 0;

}
