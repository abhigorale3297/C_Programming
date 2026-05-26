/*
    START
        Accept Number As No
        If No is Completely Divisible By 2
        Then Print Even
        Otherwise
            Print Odd
    STOP

    START
        Accept Number As no
        Divide No By 2
        If Remainder Is 0 
            Then Print As Even
        Otherwise 
            Print As Odd
    STOP
*/

#include<stdio.h>

int main()
{   
    int iValue = 0 ;
    int iRemainder = 0 ;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2 ;

    if (iRemainder == 0 )
    {
        printf("Number Is Even\n");
    }

    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}