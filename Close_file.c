#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int FD = 0 ;

    FD = open("Marvellous.txt",O_RDWR);

    if( FD == -1)
    {
        printf("Unable to Open FIle");
    }

    else
    {
        printf("File Gets Opened with FD %d\n",FD);
    }

    close(FD);

    

    return 0 ;
}