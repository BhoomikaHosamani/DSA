#include<stdio.h>
int sum(int a ,int b)
{
  int s;
  s=a+b;
  return s;
}
int diff(int a,int b)
{
    int d;
    d=a-b;
    return d;
}
int product(int a,int b)
{
    int p;
    p=a*b;
    return p;
}
int q(int a, int b)
{
    int q;
    q=a/b;
    return q;
}
int main()
{
    int a,b,s,d,p,q;
    scanf("%d%d,&a,&b");
    s=sum(a,b);
    d=diff(a,b);
    p=prod(a,b);
    q=quoitent(a,b);
    printf("sum=%d\n diff=%d\n prod=%d\n quotient=%d\n",s,d,p,q);
    return 0;

}
