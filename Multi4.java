class Demo extends Thread
{
    public void run()       //running
    {
        String name = Thread.currentThread().getName();
        System.out.println("Current thread is : "+name);
        for(int i = 1; i < 100; i++)
        {
            
        }
        System.out.println("End of Thread.");
    }
}

class Multi4
{
    public static void main(String arg[]) throws InterruptedException
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo(); // New state
        
        obj1.setName("First_Thread");
        
        obj1.start();   //runnable
        obj1.join();

        System.out.println("End of Main Thread.");
    }
        
}