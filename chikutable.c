#include<stdio.h>

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    int total = 0;

    for(int i = 1; i<= 10; i++)
    {
        total = iValue * i;
        printf("%d\n",total);
    }
    return 0;
}