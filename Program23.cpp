#include<iostream>
using namespace std;

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        cout<<"Hello world : "<<iCnt<<"\n";
    }    
}

int main()
{
    int iNo = 0;

    cout<<"Enter number of iterations : \n";
    cin>>iNo;

    Display(iNo);

    return 0;
}