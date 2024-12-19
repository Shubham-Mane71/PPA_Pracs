#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int Arr[5];     //static memory allocation

    int *ptr = (int * )malloc(5 *  sizeof(int));    // dynamic in c

    int *ptr2 = new int[5];    // dynamic in c++

    free(ptr);      //c

    delete []ptr2;      //c++

    return 0;
}