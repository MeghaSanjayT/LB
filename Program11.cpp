#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iNo1;

        Arithmetic()
        {
            iNo1 = 0;
        }
        Arithmetic(int i)
        {
            iNo1 = i;
        }

        bool DivisibleByFiveAndThree()
        {
            if((iNo1 % 3 == 0) && (iNo1 % 5 == 0))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

};
int main()
{
    int iValue1 = 0;
    bool bRet = false;
    cout<<"Enter first number : \n";
    cin>>iValue1;



    Arithmetic *ptr = new Arithmetic(iValue1);
    
    bRet = ptr->DivisibleByFiveAndThree();
    if(bRet == true)
    {
        cout<<iValue1<<" is Divisible by five and three\n";
    }
    else
    {
        cout<<iValue1<<" is not Divisible by five and three\n";
    }
    
    
    return 0;
}