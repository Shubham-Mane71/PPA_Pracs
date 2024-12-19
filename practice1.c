/*#include<stdio.h>
#define plus +

int  addition(int num1,int num2)
{
    int ans = num1 plus num2;

    return ans;
}

int main()
{

    int num1,num2;
    int ans;

    printf("enter 1st number :");
    scanf("%d",&num1);
    printf("enter 2nd number :");
    scanf("%d",&num2);

    ans = addition(num1, num2);

    printf("sum is %d\n",ans);

    return 0;
}
*/

#include<stdio.h>

int main()
{

    int n = 0;
    register int i = 0;

    printf("enter the size of array : ");
    scanf("%d",&n);

    char arr[n];
    char *ptr = arr;

    printf("enter the elements of array : ");

//    for(i = 0; i < n; i++)
//     {
         scanf("%s",arr);
//     }
//     for(i = n-1; i >= 0; i--)
//     {
        printf("%s\t",arr);
//     }
    


    return 0;
}
/*

#include<stdio.h>

int main()
{

    int no1 = 0 , no2 = 0;
    int *ptr1 = &no1;
    int *ptr2 = &no2;

     scanf("%d",ptr1);
     scanf("%d",ptr2);

     int sum = *ptr1 + *ptr2;
      int sub = *ptr1 - *ptr2;
       float div = (float)*ptr1 / (float)*ptr2;
        int multi = (*ptr1) * (*ptr2);

    printf("sum = %d\n",sum);
    printf("sum = %d\n",sub);
    printf("div = %f\n",div);
    printf("multi = %d\n",multi);

    return 0;

}

*/
