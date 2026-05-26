
#include<stdio.h>
struct Hello
{
    float f ;  //4
    int arr[3]; //12
                //16
}hobj;

int main()
{
    printf("sizeof object is: %lu\n",sizeof(hobj));

    return 0;
    
}