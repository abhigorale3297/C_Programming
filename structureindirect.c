#include<stdio.h>


#pragma pack(1)
struct demo
{
    int i;
    char  ch ;
    float f;
};

int main()
{
    struct demo dobj;

    struct demo *ptr = NULL
    ptr =&dobj;

    ptr ->i=11;
    ptr->ch='A';
    ptr->f=10.0f;

    printf("%d\n",ptr->i);
    printf("%c\n",ptr->ch);
    printf("%f\n",ptr->f);


    return 0;
    
}