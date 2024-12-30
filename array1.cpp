#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int sum=0;
    
    for(int i=0;i<10;i++)
    {
        cout<<"Enter Number  "<<(i+1)<<":";
        cin>>num[i];
        cout<<"\n";

        sum=sum+num[i];
    }
    double avg=sum/10.0;
    cout<<"Sum = "<<sum;
    cout<<"Avg = "<<avg;
}