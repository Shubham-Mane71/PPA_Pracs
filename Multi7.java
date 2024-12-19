class Demo extends Thread
{
    public void run()       //running
    {
        
        System.out.println("End of Thread.");
    }
    synchronized public void Display()
    {
        
    }
}

class Multi6
{
    public static void main(String arg[]) throws InterruptedException
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo(); // New state
        Demo obj2 = new Demo();

        obj1.setPriority(8);
        obj2.setPriority(10);
        
        obj1.setName("First_Thread");
        
        obj1.start();   //runnable
        obj1.join();
        obj2.start();
        obj2.join();

        System.out.println("Priority of obj1 is : "+obj1.getPriority());
        System.out.println("Priority of obj2 is : "+obj2.getPriority());

        System.out.println("End of Main Thread.");
    }
        
}