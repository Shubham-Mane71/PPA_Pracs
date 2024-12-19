#include<iostream>
using namespace std;

class Demo
{
        int i;
    public :
        int j ;
    private :
        int k;
    protected :
        int a;
    public :
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }
        void Display()
        {
            cout<<"value of i : "<<i<<"\n";
            cout<<"value of j : "<<j<<"\n";
            cout<<"value of k : "<<k<<"\n";
            cout<<"value of a : "<<a<<"\n";
        }
};

class Hello : public Demo
{
    public :
            void HelloDisplay()
            {
            //cout<<"value of i : "<<i<<"\n";
            cout<<"value of j : "<<j<<"\n";
           // cout<<"value of k : "<<k<<"\n";
            cout<<"value of a : "<<a<<"\n";
            }            
};

int main()
{
    Hello hobj;
    hobj.HelloDisplay();
    
    return 0;
}