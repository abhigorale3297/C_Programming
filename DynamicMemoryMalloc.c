
#include<stdio.h>
#include<stdlib.h>


int main()
{    
    int Size = 0;
    float *Marks = NULL;
    int i = 0;

    printf("Enter number of Elements\n");
    scanf("%d",&Size);

    // Dynamic  Memory  Allocation
    Marks =(float *)malloc(Size*sizeof(float));
   
    
    printf("Enter Your Marks:\n");

      //   1    2     3
    for(i = 0; i < Size; i++)
    {
        scanf("%f",&Marks[i]); //4
    }  
    
    printf("Entered marks are :\n");
    
   for(i = 0; i < Size; i++)
    {
        printf("%f\n",Marks[i]);
    }  

    free(Marks);

    return 0;
}