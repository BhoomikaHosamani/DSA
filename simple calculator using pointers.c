#include<stdio.h>

void calculator(int a,int b,int *sum,int *diff,int *prod,int *quot,int *rem)
{
    *sum=a+b;
    *diff=a-b;
    *prod=a*b;
    *quot=a/b;
    *rem=a%b;
    return;
}

int main()
{
    int a,b,sum,diff,prod,quot,rem;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    calculator("\nsum=%d\ndiff=%d\nprod=")
}
