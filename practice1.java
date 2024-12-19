import java.util.*;
import java.io.*;

class Addition
{
    public int iValue1, iValue2;
    Addition(int A,int B)
    {
        iValue1 = A;
        iValue2 = B;
    }
    public int Add()
    {
        return iValue1 + iValue2;
    }
}
class practice1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the 1st number : ");
        int no1 = sobj.nextInt();
        System.out.println("Enter the 2nd number : ");
        int no2 = sobj.nextInt();
        int iRet = 0;

        Addition aobj = new Addition(no1,no2);
        iRet = aobj.Add();

        System.out.println("Additions is "+iRet);
    }
}