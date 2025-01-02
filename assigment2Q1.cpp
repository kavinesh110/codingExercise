#include <iostream>
using namespace std;

int main()
{
    int array1[5];
    int array2[5];
    int array3[10];
    


    cout<<"Enter table array1:"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"Please enter an integer: ";
        cin>>array1[i];
    }

    cout<<"\nEnter table array2:"<<endl;
    
    for(int j=0;j<5;j++)
    {
        cout<<"Please enter an integer: ";
        cin>>array2[j];
    }


    for(int k=0;k<5;k++)
    {
        array3[k]=array1[k];
    }

    for(int k=0;k<5;k++)
    {
        array3[k+5]=array2[k];
    }

  
   cout<<"\nTable array3 :"<<endl;
   for(int q=0;q<10;q++)
   {
    cout<<array3[q]<<" ";
   }
int range,numOfOdd=0,sum=0,highest=array3[0],smallest=array3[0];
double avg;

   for(int h=0;h<10;h++)
   {
    sum=sum+array3[h];
    
    if(array3[h]>highest)
      highest=array3[h];

    if(array3[h]<smallest)
      smallest=array3[h];

    if(array3[h]%2==1)
      numOfOdd=numOfOdd+1; 

   }
avg=sum/10.0;
range=highest-smallest;

cout<<"\n\nThe average of ten number in array3 = "<<avg<<endl;
cout<<"The range of values in array3 = "<<range<<endl;
cout<<"The number of add numbers in array3 = "<<numOfOdd<<endl;

return 0;
}



