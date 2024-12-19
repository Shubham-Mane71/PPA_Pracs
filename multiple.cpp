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

class Hello      
{
    public :
            int a,b;
            Hello()
            {
                cout<<"Inside Hello constructor \n";
                a = 30;
                b = 40;
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

class Marvellous :public Demo, public Hello  
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

    Mobj1.fun();
    Mobj1.gun();
    Mobj1.sun();

    return 0;
}