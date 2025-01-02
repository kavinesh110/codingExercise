#include <iostream>
using namespace std ;
int main()
{  
    int size;
    cout<<"Enter Number of Students :";
    cin>>size;
    double tests[size];
   
    double sum=0;
    
    for(int i=0;i<size;i++)
    {
        cout<<"Student "<<(i+1)<<":";
        cin>>tests[i];
        cout<<"\n";
        sum=sum+tests[i];
    }
    double avg=sum/size;
    cout<<"Total mark of the students = "<<sum<<endl;
    cout<<"Average Mark = "<<avg<<endl;
}

