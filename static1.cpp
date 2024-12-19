#include<iostream>
using namespace std;

class Demo
{

public :

        int i;
        int j;

        Demo(int a = 10, int b = 20)    // parameterized constructor with Default argument
        {
            i = a;
            j = b;
        }
    /*
    demo()
    */
        void Display()
        {
            cout<<"value of i is : "<<i<<"\n";
            cout<<"value of j is : "<<j<<"\n";
        }
};

int main()
{
    Demo obj1;
    obj1.Display();

    Demo obj2(11);
    obj2.Display();

    Demo obj3(40,50);
    obj3.Display();

    return 0;
}