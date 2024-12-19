import java.util.*;
class InputOutput
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the 1st number : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter the 2nd number : ");
        int No2 = sobj.nextInt();

        int Ans = 0;
        Ans = No1 + No2;

        System.out.println("Addition is "+Ans);
        sobj.close();
    }
}