class Arithematic
{
    public int Addition(int A,int B)
    {
        return A+B;
    }
    public int Addition(int A,int B, int C)
    {
        return A+B+C;
    }
    public int Addition(float A,float B)
    {
        return A+B;
    }
}

class Overloading
{
    public static void main(String arg[])
    {
        Arithematic obj = new Arithematic();

        int iRet = 0;
class Arithematic
{
    public int Addition(int A, int B)
    {
        return A+B;
    }
    public int Addition(int A, int B, int C)
    {
        return A+B+C;
    }
    public double Addition(double A, double B)
    {
        return A+B;
    }
}

class Overloading
{
    public static void main(String arg[])
    {
        Arithematic aobj = new Arithematic();

        int iret = 0;
        double dret = 0.0;

        iret = aobj.Addition(10,11);
        System.out.println("Addition is : "+iret);
        iret = aobj.Addition(10,11,21);
        System.out.println("Addition is : "+iret);
        dret = aobj.Addition(10.8,11.7);
        System.out.println("Addition is : "+dret);
    }
}
        float fRet = 0.0;

        iRet = obj.Addition(11,21);
        System.out.println("Addition is "+iRet);
        iRet = obj.Addition(10,11,21);
        System.out.println("Addition is "+iRet);
        fRet = obj.Addition(71.4,34.3);
        System.out.println("Addition is "+fRet);

    }
}