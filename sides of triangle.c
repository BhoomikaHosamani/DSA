#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b&&a==c)
        printf("its a equilateral triangle");
    else if ((a==b)&&(a!=c))
        printf("its a isosceles triangle");
    else if(a!=b&&a!=c)
        printf("its a scalene triangle");
    else if (c*c==a*a+b*b)
        printf("its a right angled triangle");
    return 0;

}
