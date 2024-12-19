#include<iostream>
using namespace std;

class Base
{
    public :

    void fun()
    {
        cout<<"Inside fun of base\n";
    }
};

class Derived : public Base
{
    public :

    void Gun()
    {
        cout<<"Inside gun of derived\n";
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    bobj.fun();

    dobj.fun();
    dobj.Gun();

    return 0;
}