class Marvellous
{
    public int i;
    public int j;

    public Marvellous()
    {
        System.out.println("Inside default constructo");
        this.i = 0;
        this.j = 0;
    }

    public Marvellous(int a,int b)
    {
        System.out.println("Inside parameterised constructor");
        this.i = a;
        this.j = b;
    }

    public void Fun()
    {
        System.out.println("Inside Fun method");
    }
}

class ClassDemo
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main");

        Marvellous mobj1 = new Marvellous();
        Marvellous mobj2 = new Marvellous(11,21);

        System.out.println(mobj2.i);
        System.out.println(mobj2.j);

        mobj2.Fun();

    }
}