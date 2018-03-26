#include<iostream>
#include<stdio.h>
using namespace std;
#define size 20
int Row,Col;
int singleArraySize;  // no of rows and no of collumn
float oneD_Inputarray[size];
float oneD_ResultArray[size];
float twoD_Inputarray[size][size];
float twoD_ResultArray[size][size];
void twoDArrayAvg();
void twoDArrayMax();
void twoDArrayInput();
void twoDArrayoutput();
void oneDArrayAvg();
void oneDArrayMax();
void singleArrayInput();
void singleArrayOutput();



int main()
{
    int x,y;
    char ch;
    cout<<"enter input \n 1. 1D array \n 2. 2D array \n\n";
    cin>>x;
    cout<<"enter input for opretions\n 1. Avg series \n 2. max Array\n";
    cin>>y;
    do{
             if(x==1)
            {
                switch(y)
                        {
                            case 1:
                            singleArrayInput();
                            oneDArrayAvg();
                            singleArrayOutput();
                            break;

                            case 2:
                            singleArrayInput();
                            oneDArrayMax();
                            singleArrayOutput();
                            break;

                            default: cout<<"invalid !!!";
                        }

            }
            else if(x==2)
            {
                switch(y)
                        {
                            case 1:
                            twoDArrayInput();
                            twoDArrayAvg();
                            twoDArrayoutput();
                            break;

                            case 2:
                            twoDArrayInput();
                            twoDArrayMax();
                            twoDArrayoutput();
                            break;

                            default: cout<<"invalid !!!";
                        }
            }
            else{
                cout<<"invalid ! input";
            }


            cout<<"if you want to calculate again enter y/Y";
            cin>>ch;


            }while(ch=='y'||ch=='Y');


    return 0;

}


void singleArrayInput()
{
    cout<<"\nenter size of 1D Array= ";
    cin>>singleArraySize;

    cout<<"pleas enter element of 1D Array max(20 element)\n ";

       for(int j=0; j<singleArraySize; j++)
        {
            cin>>oneD_Inputarray[j];
        }

}
void twoDArrayInput()
{
     // no of rows and no of collumn
    cout<<"\nenter size of 2D Array Row and col =\n ";
    cin>>Row>>Col;
    cout<<"\n pleas enter element of 2D Array max(20x20)\n ";

    for(int i=0; i<Row; i++) // for input
    {
        for(int j=0; j<Col; j++)
        {
            cin>>twoD_Inputarray[i][j];

        }

    }

}
void singleArrayOutput(){
 // for output print
cout<<"\n************* output **************\n\n";

       for(int j=0; j<singleArraySize; j++)
        {
            cout<<oneD_ResultArray[j]<<"\t";
        }

}

void twoDArrayoutput(){

    // for output print
cout<<"************* output **************\n\n";

    for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {
            cout<<twoD_ResultArray[i][j]<<"\t";
        }
        cout<<"\n";
    }


}
void oneDArrayMax()
{


      //main logic for one D array
      for(int i=0;i<singleArraySize;i++)
      {
          int max=oneD_Inputarray[i];
          if(oneD_Inputarray[i+1]>max)
         {
             max = oneD_Inputarray[i+1];
         }
         oneD_ResultArray[i]=max;

      }




}

void twoDArrayMax()
{


// main logic of a 2D Array program

     for(int i=0; i<Row; i++)
    {
        for(int j=0; j<Col; j++)
        {

            if(i<Row-1 && j<Col-1)            // for internal element
            {
                int max=twoD_Inputarray[i][j];
                for(int tempRow=i; tempRow<=i+1; tempRow++)
                {
                    for(int tempCol=j; tempCol<=j+1; tempCol++)
                    {
                        if(twoD_Inputarray[tempRow][tempCol]>max)
                        {
                            max=twoD_Inputarray[tempRow][tempCol];
                        }


                    }

                }
                twoD_ResultArray[i][j]=max;
            }
            else if(i==Row-1&&j<Col-1)   // for last row exception
            {
                int max=twoD_Inputarray[i][j];

                for(int tempCol=j; tempCol<=j+1; tempCol++)
                    {
                        if(twoD_Inputarray[i][tempCol]>max)
                        {
                           max=twoD_Inputarray[i][tempCol];
                        }


                    }

                twoD_ResultArray[i][j]=max;
            }
             else if(i<Row-1&&j==Col-1)  // for last col exception
            {
                int max=twoD_Inputarray[i][j];
                for(int tempCol=i; tempCol<=i+1; tempCol++)
                {
                    if(twoD_Inputarray[tempCol][j]>max)
                    {
                        max=twoD_Inputarray[tempCol][j];
                    }



                }

                twoD_ResultArray[i][j]=max;
            }
            else
               twoD_ResultArray[i][j]=twoD_Inputarray[i][j];   // for right most bottom element
        }

    }




}
 void oneDArrayAvg()
 {
     //main logic for one D array
      for(int i=0;i<singleArraySize;i++)
      {

         oneD_ResultArray[i]=(oneD_Inputarray[i]+oneD_Inputarray[i+1])/2;
         if(i==singleArraySize-1)
         {
             oneD_ResultArray[i]=oneD_Inputarray[i];

         }

      }
 }



void twoDArrayAvg()
{

     for(int i=0; i<=Row; i++)
    {
        for(int j=0; j<=Col; j++)
        {
            float sum=0;

            if(i<Row-1 && j<Col-1)
            {
                sum=0;
                for(int p=i; p<=i+1; p++)
                {
                    for(int q=j; q<=j+1; q++)
                    {
                        sum+=twoD_Inputarray[p][q];

                    }

                }

                twoD_ResultArray[i][j]=sum/4;
            }
            else if(i==Row-1&&j<Col-1)
            {

                sum=0;

                for(int q=j; q<=j+1; q++)
                {
                    sum+=twoD_Inputarray[i][q];


                }

                twoD_ResultArray[i][j]=sum/2;
            }
             else if(i<Row-1&&j==Col-1)
            {

                sum=0;
                for(int q=i; q<=i+1; q++)
                {
                    sum+=twoD_Inputarray[q][j];


                }


                twoD_ResultArray[i][j]=sum/2;
            }
            else
               twoD_ResultArray[i][j]=twoD_Inputarray[i][j];
        }

    }

}
