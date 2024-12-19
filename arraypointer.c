#include<stdio.h>

int main()
{

    int arr[5] = {10,20,30,40,50};

    printf("%d\n",arr);     //base address of first element
    printf("%d\n",&arr);    //base address of whole array

    printf("%d\n",arr[1]);

    printf("%d\n",arr[3]);  //40
    printf("%d\n",*(arr+3));    //40
    printf("%d\n",*(3+arr));    //40
    printf("%d\n",3[arr]);  //40

    return 0;

}