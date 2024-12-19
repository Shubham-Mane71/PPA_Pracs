// #include<stdio.h>
// #include<stdlib.h>

/*int main()
{
    int Arr[5];
    float fValue;
    double Brr[4];

    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of Array : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    ptr[0] = 10;
    ptr[1] = 11;
    ptr[2] = 12;

    free(ptr);
    
    return 0;
}
*/
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
        printf("%d",total);
    }
    return 0;
}