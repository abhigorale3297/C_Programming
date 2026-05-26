#include<stdio.h>
int main()
{
    int i = 11;
    short int j = 11;
    long int k = 11;


    printf("size of int : %d\n",sizeof(i)); //4
    printf("short of int :%d\n",sizeof(j)); //2
    printf("long of int :%d\n",sizeof(k)); //8


    return 0 ;
}