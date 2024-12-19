#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int (&brr)[5] = arr;

    cout<<arr[0]<<"\n";
    cout<<brr[0]<<"\n";

    return 0;
}