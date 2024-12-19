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

class Derivedx extends Base
{
    public int m,n;
    public Derivedx()
    {
        System.out.println("Derivedx construtor");
    }
}

class Heirarcal
{
    public static void main(String arg[])
    {
        Derived dobj1 = new Derived();
        Derivedx dobj2 = new Derivedx(); 
        
    }
}