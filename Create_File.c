#include<stdio.h>
#include<fcntl.h>


int main()
{
    int FD = 0;

    FD = creat("Marvellous.txt",0777);

    if (FD == -1)
    {
        printf("Unable to Create file\n");
    }
    else
    {
        printf("File get Created with fd : %d\n",FD);
    }

    return 0 ;
}