#include<iostream>
using namespace std;

float calculation(float marks, float outof = 100)
{
    int percentage = ((marks/outof)*100);
    return percentage;
}

int main()
{
    float Ans = 0.0f;

    Ans = calculation(84,100);  
    cout<<"percentage is : "<<Ans<<"\n";

    Ans = calculation(84);
    cout<<"percentage is : "<<Ans<<"\n";

    Ans = calculation(320,400);
    cout<<"percentage is : "<<Ans<<"\n";

    return 0;
}