#include<stdio.h>

int main()
{
    char Arr[40];

    printf("Enter the name : ");
    scanf("%[^'\n']s",Arr);

    printf("You name is %s\n",Arr);

    return 0;
}