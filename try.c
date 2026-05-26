#include <stdio.h>

void sun(int a, int b)
 {
    printf("inside sun  %d and %d\n", a, b);
}

int gun(int x, char c)
{
    printf("inside gun %d and %c\n", x, c);
    return x ,c;
}

void fun(float f, double d)
{
    printf("inside fun %f, %lf\n",f,d);
}

int main() 
{
    void (*p1)(int, int) = sun;
    int (*p2)(int, char) = gun;
    void (*p3)(float, double) = fun;

    p1(10,20);
    int result = p2(5,'A');
    p3(3.14f,23.0000);
    
    

    return 0;
}