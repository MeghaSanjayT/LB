import java.util.*;

class Arithmatic
{
    public int iValue1;

    public Arithmatic(int i)
    {
        iValue1 = i;
    }

    public boolean DivisibleByFiveAndThree()
    {
        
        if((iValue1 % 3 == 0) && (iValue1 % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program11
{
    public static void main(String ar[])
    {
        int iNo1 = 0;
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number :");
        iNo1 = sobj.nextInt();


        Arithmatic aobj = new Arithmatic(iNo1);
        bRet = aobj.DivisibleByFiveAndThree();
        if(bRet == true)
        {
            System.out.println(iNo1+" is Divisible by five and three");
        }
        else
        {
            System.out.println(iNo1+" is not Divisible by five and three");
        }

    }
}