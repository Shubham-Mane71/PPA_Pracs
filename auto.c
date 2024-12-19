#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystem";
    int Ret = 0;
    int Ret1 = 0;
    char Brr[10];

    fd = creat("Marvellous.txt",0777);

    fd = open("Marvellous.txt",O_RDWR);
    if(fd != -1)
    {
        printf("File is successfully opened with FD : %d\n",fd);
    }

    Ret = write(fd,Arr,strlen(Arr));

    Ret1 = read(fd,Brr,10);

    printf("Data is : %s",Brr);

    close(fd);

    unlink("Marvellous.txt");

    return 0;
}

