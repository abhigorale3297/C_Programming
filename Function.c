#include<stdio.h>
int addition(int no1 , int no2)
{
    int result = 0;
    result = no1+no2 ;
    return result;

}

int main()
{
    int i = 0, j = 0, ans = 0 ;
    printf("enter frst number\n");
    scanf("%d",&i);
    printf("enter second number\n");
    scanf("%d",&j);
    ans= addition(i,j);
    printf("addition is %d",ans);
    return 0 ;
}
