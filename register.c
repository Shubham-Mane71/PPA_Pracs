#include<stdio.h>

void Display()
{

    register int No = 11;   
    register int  j = 21; 

    printf("value of No : %d\n",No);
    printf("value of j : %d\n",j);

}

int main()
{

        Display();
    
    return 0;
}