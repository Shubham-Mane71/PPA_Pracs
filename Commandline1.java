class Commandline1
{
    public static void main(String arg[])
    {
        System.out.println("Number of command line argument are : "+arg.length);
        System.out.println("Command line argument are : ");

        for(int i = 0; i < arg.length; i++)
        {
            System.out.println(arg[i]);
        }
    }
}