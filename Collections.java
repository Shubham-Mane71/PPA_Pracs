import java.util.*;

class Collections
{
    public static void main(String arg[])
    {
        Vector <Integer> lobj = new Vector<Integer>();

        lobj.add(10);
        lobj.add(20);
        lobj.add(30);
        lobj.add(40);

        System.out.println(lobj);

        lobj.addFirst(5);
        System.out.println(lobj);
        if(lobj.contains(30))
        {
            System.out.println("LL contains 30 in it");
        }
        else
        {
            System.out.println("LL does not contains 30 in it");
        }

        System.out.println("Index of 30 is "+lobj.indexOf(30));
        Iterator iobj = lobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        lobj.clear();
    }
}