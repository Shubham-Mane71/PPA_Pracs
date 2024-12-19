#include<iostream>
using namespace std;

class Demo
{
    public :
            //1000
            int Addition(int A, int B)  //Addtition@2ii
               {
                    int Ans = 0;
                    Ans = A + B;
                    return Ans;
               }
            //2000
            int Addition(int A, int B, int C)   //Addition@3iii
                {
                    int Ans;
                    Ans = A + B + C;
                    return Ans;
                 }
            //3000
            float Addition(float A, float B)    //Addition@2ff
                {
                   float Ans;
                   Ans = A + B;
                   return Ans;
                }
};

int main()
{
    Demo obj;
    int i = 10, j = 20, k = 30;
    int ret = 0;
    float p = 90.48f, q = 78.34f, fret = 0.0;

    fret = obj.Addition(p,q);
    cout<<"Addition is : "<<fret<<"\n";

     ret = obj.Addition(i,j,k);
    cout<<"Addition is : "<<ret<<"\n";

     ret = obj.Addition(i,j);
    cout<<"Addition is : "<<ret<<"\n";

    return 0;
}