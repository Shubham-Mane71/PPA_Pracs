class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void fun()
    {
        System.out.println("Base fun");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived constructor");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}

class Derivedx extends Derived
{
    public int m,n;
    public Derivedx()
    {
        System.out.println("Derivedx construtor");
    }
}

class Multilevel
{
    public static void main(String arg[])
    {
        Derivedx dobj = new Derivedx();
        dobj.fun();
        dobj.gun();
    }
}