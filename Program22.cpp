#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        cout<<"Hello world : "<<iCnt<<"\n";
    }
}

int main()
{
    Display();

    return 0;
}