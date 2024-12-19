#include<stdio.h>

void Fun_value(int iNo)
{   iNo++;   }
void Fun_Address(int *iNo)
{   (*iNo)++;  }
void Fun_ref(int &iNo)
{   iNo++;  }

int main()
{
    int i = 10, j = 20, k = 30;

    Fun_value(i);
    Fun_Address(&j);
    Fun_ref(k);

    printf("Call by value : i %d\n",i);
    printf("Call by address : j %d\n",j);
    printf("Call by reference : k %d\n",k);

    return 0;
}