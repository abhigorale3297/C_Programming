
#include<stdio.h>


int main()
{    // Static Memory Allocation
    float Marks [5]; // 20 Bytes
    int i = 0;
     //  Loop Counter
    printf(" Enter Your Marks:\n");

    //Itteration

      //   1    2     3
    for(i = 0; i < 5; i++)
    {
        scanf("%f",&Marks[i]); //4
    }  
    
    printf("Entere marks are :\n");
    
   for(i = 0; i < 5; i++)
    {
        printf("%f\n",Marks[i]);
    }  

    return 0;
}