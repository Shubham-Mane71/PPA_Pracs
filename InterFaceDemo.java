interface Mathematics
{
    public int Addition(int A, int B);
    public int Substraction(int A, int B);
}

class Marvellous implements Mathematics
{
    public int Addition(int A, int B)
    {
        return A + B;
    }
    public int Substraction(int A, int B)
    {
        return A - B;
    }
}

class InterFaceDemo
{
    public static void main(String arg[])
    {
        Marvellous mobj = new Marvellous();
        int iRet = 0;
        iRet = mobj.Addition(11,21);
        System.out.println("Addition is "+iRet);
        iRet = mobj.Substraction(100,43);
        System.out.println("Substraction is "+iRet);
    }
}