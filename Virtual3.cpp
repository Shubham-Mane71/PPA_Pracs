#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {   cout<<"Inside Base fun\n";    }
        void GUN()
        {   cout<<"Inside Base Gun\n";       }
        void Sun()
        {   cout<<"Inside Base Sun\n";    }
        void RUN()
        {   cout<<"Inside Base Run\n";       }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()
        {   cout<<"Inside Derived Gun\n";    }
        void RUN()
        {   cout<<"Inside Derived Run\n";    }
};

int main()
{
    Base *bp = new Derived;
    bp -> Fun();
    bp -> Gun();
    bp -> Sun();
    bp -> Run();
    return 0;
}