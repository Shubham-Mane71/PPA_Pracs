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

int main()
{
    Demo obj;

    // cout<<"value of i : "<<obj.i<<"\n";     //not  allowed
     cout<<"value of j : "<<obj.j<<"\n";     //allowed
    // cout<<"value of k : "<<obj.k<<"\n";     //not allowed
    // cout<<"value of a : "<<obj.a<<"\n";     //not allowed
    
    obj.Display();
    
    return 0;
}