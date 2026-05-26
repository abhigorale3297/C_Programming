#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int FD = 0 ;
    int Ret = 0 ;

    char Arr[20] ;

    FD = open("Marvellous.txt",O_RDWR);

    if( FD == -1)
    {
        printf("Unable to Open FIle");
    }

    else
    {
        printf("File Gets Opened with FD %d\n",FD);

        Ret = read(FD,Arr,6);


        printf("%d bytes get read from the file \n",Ret);

        printf("%s\n",Arr);
    }

    close(FD);


    return 0 ;
}