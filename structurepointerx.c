
#include<stdio.h>

struct Demo
{
    int i; 

    int *ptr;
};

int main()
{

    struct Demo dobj;

    int no = 21;

    dobj.i = 11;
    dobj.ptr =&no;

    printf("%d\n",dobj.i);

    printf("%d\n",*(dobj.ptr)); 

    return 0;
    
}