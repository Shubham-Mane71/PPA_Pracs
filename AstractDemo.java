abstract class Demo
{
    public int A;
    public int B;

    public Demo()
    {
        System.out.println("Inside constructor");
        this.A = 0;
        this.B = 0;
    }

    abstract void fun();    // virtual void fun() = 0;

    public void gun()
    {
        System.out.println("Inside gun");
    }
}

class Hello extends Demo
{
    public void fun()
    {
        System.out.println("Inside fun");
    }
}

class AstractDemo
{
    public static void main(String arg[])
    {
        System.out.println("Inside main...");

        Hello obj = new Hello();
        obj.fun();
        obj.gun();
    }
}


