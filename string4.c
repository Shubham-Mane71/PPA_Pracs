#include<stdio.h>

int CalChar(char *Arr)
{
    int iCnt = 0;
    while(*Arr != '\0')
    {
        iCnt++;
        Arr++;
    }
    return iCnt;
}
int main()
{
    char str[40];
    int iRet = 0;

    printf("Enter the name : ");
    scanf("%[^'\n]s",str);

    iRet = CalChar(str);

    printf("Total characters are %d",iRet);

    return 0;
}