class Employee
{
    public String name;
    public int salary;
    public int age;
    public String Address;

    Employee(String str, int amount, int A, String addr)
    {
        this.name = str;
        this.salary = amount;
        this.age = A;
        this.Address = addr;
    }

    public void Display()
    {
        System.out.println("Employee Name is "+this.name);
        System.out.println("Employee salary "+this.salary);
        System.out.println("Employee age "+this.age);
        System.out.println("Employee Address "+this.Address);
    }
}

class FinalizeDemo
{
    public static void main(String args[])
    {
        Employee eobj = new Employee("Amit",78000,28,"Karve Road Pune");
        eobj.Display();
    }
}