
    #include<bits/stdc++.h>
    using namespace std;
    void show(int a[],int n)
    {

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }

    }
    int main()
    {
        int a[]={2,4,2,3,6,5,7,6,5,8,33,5,9,0,12,3,54,3};
       int n =sizeof(a)/sizeof(a[0]);
       cout<<n;
       show(a,n);
       cout<<"\nenter key for search=";
       int x;
       cin>> x ;
       sort(a,a+n);
       cout<<"\n"<<binary_search(a,a+n, x);// it gives bool result

        return 0;
    }
