#include<stdio.h>
#include<stdbool.h>  // boolean

bool CheckEvenOdd(int iNo)
{
    int iRemainder = 0 ;

    iRemainder = iNo % 2 ;

    if (iRemainder == 0) 
    {
        return true;
    }
    else
    {
        return false ;
    }
}

int main()
{   
    int iValue = 0 ;
    bool bRet = false ;

    printf("Enter Number To Check Whether It Is Even Or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    if(bRet == true)
    {
        printf("The Number: %d Is Even\n",iValue);
    }
    else
    {
        printf("The Number : %d Is Odd\n",iValue);
    }

    return 0;
}