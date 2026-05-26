#include <stdio.h>

int Addition(int, int);

int main()
{
    int A=0 ,B=0;
    int Ret=0;

    printf("Enter First Number : \n");
    scanf("%d", &A);

    printf("Enter Second Number : \n");
    scanf("%d", &B);

    Ret = Addition(A,B);

    printf("Addition is %d \n", Ret);
    return 0;
}