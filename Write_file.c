#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int FD = 0 ;
    int Ret = 0 ;

    char Arr[] = "Marvellous Infosystems";


    FD = open("Marvellous.txt",O_RDWR);

    if( FD == -1)
    {
        printf("Unable to Open FIle");
    }

    else
    {
        printf("File Gets Opened with FD %d\n",FD);

        Ret = write(FD,Arr,10);

        printf("%d bytes get written in file \n",Ret);
    }

    close(FD);


    return 0 ;
}