#include<iostream>
using namespace std;

class Arithmatic
{
    public:

        Arithmatic()
        {

        }

        void DisplayOddFactors(int iNo)
        {
            int iCnt = 0;
            cout<<"Odd-Factors are as follows :\n";
            for(iCnt = 1; iCnt<=(iNo/2); iCnt = iCnt+2)
            {
                if((iNo % iCnt == 0))
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
};

int main()
{
    int iNo = 0;

    cout<<"Enter number : \n";
    cin>>iNo;

    Arithmatic aobj;

    aobj.DisplayOddFactors(iNo);

    return 0;
}