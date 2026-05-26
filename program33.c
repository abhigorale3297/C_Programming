#include<stdio.h>


void Display(int iNo)  
{
    int iCnt = 0 ;
    // Filter
    if (iNo< 0)
    {
        printf("Invalid Input");
        return ;
    }
    
    for(iCnt = 0 ; iCnt <= iNo ; iCnt ++)  // Dynamic Loop
    {
        printf("%d\n ",iCnt);

    }
}

int main()
    {
        
        int iValue = 0 ;

        printf("Enter The Frequency :");
        scanf("%d",&iValue);

        Display(iValue);

        return 0;
    }
