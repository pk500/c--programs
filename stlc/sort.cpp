    // #include<iostream>
    // #include<algorithm>
    #include<bits/stdc++.h>
    using namespace std;
    void show(int a[])
    {
        //cout<<sizeof(a)<<"\t"<<sizeof(a[1]);
        for(int i=0;i<18;i++)
        {
            cout<<a[i]<<"\t";
        }

    }
    int main()
    {
        int a[]={2,4,2,3,6,5,7,6,5,8,33,5,9,0,12,3,54,3};
        //show(a);
     //  sort_heap(a,a+18);
       sort(a,a+18);

        show(a);
        return 0;
    }
