#include <iostream>
using namespace std;
int sum(int b[]);


const int SIZE=5;
int main(){
    int score[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        cout<<"enter markah :";
        cin>>score[i];}
    int sumOfScore=sum(score);
    cout<<"Sum :"<<sumOfScore;
}


int sum(int b[])
{ 
    int sum=0;
    for(int i=0;i<SIZE;i++)
        sum=sum+b[i];
    
    return sum;
}