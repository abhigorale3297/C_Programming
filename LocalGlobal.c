#include<stdio.h>

int no = 11;  //gobal variable (data section)

void fun()
{
    int i = 51; //local variable 

    printf("inside fun :%d\n",i);  //51
    printf("inside fun :%d\n",no); //11

}

int main()
{
    int i = 21; //local variable (stack section)

    printf("inside main :%d\n",i); //21
    printf("inside main :%d\n",no); //11

    fun();
 
    return 0;;
}