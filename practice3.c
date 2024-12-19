#include<stdio.h>

int main()
{
    int std;

    printf("\t School Portal\t\n");

    printf("enter std : ");
    scanf("%d",&std);
    
    switch(std)
    {
        case 1:
                printf("your exam time is 1pm\n");
        break;
        case 2:
                printf("your exam time is 2pm\n");
        break;
        case 3:
                printf("your exam time is 3pm\n");
        break;
        case 4:
                printf("your exam time is 4pm\n");
        break;
        default :
                printf("invalid std....\n");
        break;
    }

    return 0;

}