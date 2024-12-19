#include<iostream>
using namespace std;

int main()
{
    int fd = 0;
    char Arr[] = "MArvellous Infosystem";
    int Ret = 0;
    int Ret1 = 0;
    char Brr[10];

    fd = create("Marvellous.txt",0777);

    fd = open("Marvellous.txt",O_RDWR);
    if(fd != -1)
    {
        printf("File is successfully opened with FD : %d\n",fd);
    }

    Ret = write(fd,Arr,Arr.length);

    Ret1 = read(fd,Brr,10);

    cout<<"Data is "<<Brr;

    close(fd);

    unlink("Marvellous.txt");

    return 0;
}

