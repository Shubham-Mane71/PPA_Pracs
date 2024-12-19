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

class Marvellous : public Hello
{
    public : 
            int  p;
            Marvellous()
            {
                cout<<"Inside destructor of marvellous\n";
                p = 60;
            }
            ~Marvellous()
            {
                cout<<"Inside destructor of marvellous\n";
            }
            void sun()
            {
                cout<<"Inside sun of marvellous\n";
            }
};

int main()
{
    Marvellous Mobj1;

    cout<<"size of hello class "<<sizeof(Mobj1)<<"\n";      //20

    cout<<Mobj1.x<<"\n";    //10
    cout<<Mobj1.y<<"\n";    //20
    cout<<Mobj1.a<<"\n";    //30
    cout<<Mobj1.b<<"\n";    //40
    cout<<Mobj1.c<<"\n";    //50
    cout<<Mobj1.p<<"\n";    //60

    Mobj1.fun();
    Mobj1.gun();
    Mobj1.sun();

    return 0;
}