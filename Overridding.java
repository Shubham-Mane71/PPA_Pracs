class Base
{
    public void fun()
    {   System.out.println("Inside base fun");  }
    public void gun()
    {   System.out.println("Inside base gun");  }
    public void sun()
    {   System.out.println("Inside base sun");  }
    public void run()
    {   System.out.println("Inside base run");  }
}

class Derived extends Base
{
    public void fun()
    {   System.out.println("Inside Derived fun");  }
    public void sun()
    {   System.out.println("Inside Derived sun");  }
    public void run(int A)
    {   System.out.println("Inside Derived run");  }
    public void mun()
    {   System.out.println("Inside Derived mun");  }
    
}

class Overridding
{
    public static void main(String arg[])
    {
        Base dobj = new Derived();

        dobj.fun();
        dobj.gun();
        dobj.sun();
        dobj.run();
        // dobj.run(11);
        // dobj.mun();
    }
}