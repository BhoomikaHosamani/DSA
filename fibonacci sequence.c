#include<stdio.h>
void series (void)
{
    int cnt=1,n,current_term;
    int first_previous_term=-1,second_previous_term=-1;
    while(cnt<=n)
    {
        current_term=first_previous_term+second_previous_term;
        printf("%3d",current_term);
        first_previous_term=second_previous_term;
        second_previous_term=current_term;
        cnt++;
    }
    return ;

}
int main()
{
    int n,ser;
    printf("enter n");
    scanf("%d",&n);
    series();
    return 0;
}
