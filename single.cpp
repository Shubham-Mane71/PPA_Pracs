#include<iostream>
using namespace std;

class Demo
{
    public :
            int x,y;

            Demo()
            {
                cout<<"Inside constructor \n";
                x = 10;
                y = 20;
            }
            ~Demo()
            {
                cout<<"Inside destructor \n";
            }
            void fun()
            {
                cout<<"Inside fun method \n\n";
            }

};

class Hello : public Demo
{
    public :
            int a,b,c;
            Hello()
            {
                cout<<"Inside Hello constructor \n";
                a = 30;
                b = 40;
                c = 50;
            }
            ~Hello()
            {
                cout<<"Inside Hello destructor \n";
            }
            void gun()
            {
                cout<<"Inside gun of Hello \n";
            }

};

int main()
{
    Hello hobj1;

    cout<<"size of hello class "<<sizeof(hobj1)<<"\n";      //20

    cout<<hobj1.x<<"\n";    //10
    cout<<hobj1.y<<"\n";    //20
    cout<<hobj1.a<<"\n";    //30
    cout<<hobj1.b<<"\n";    //40
    cout<<hobj1.c<<"\n";    //50

    hobj1.fun();
    hobj1.gun();

    return 0;
}