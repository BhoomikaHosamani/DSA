#include<stdio.h>
int main()
{
    char designation;
    float salary,increement,total_salary;
    printf("enter the designation salary of employee\n");
    scanf("%c,%f",& designation,&salary);
    switch(designation)
    {
        case'S':if(salary>=100000&&salary<=200000)
        {
            increement=salary*0.05;
            total_salary=salary+increement;
            printf("total_salary is %2f\n",total salary);
        }
        else if(salary>=70000&&salary<100000)
        {
            increement=salary*0.03;
            total_salary=salary+increement;
            printf("total_salary is %2f\n",total salary);
        }
        else if(salary>=40000&&salary<70000)
        {
            increement=salary*0.03;
            total salary=salary+increement;
            printf("total_salary is %2f\n",total salary);
        }
        else
            printf("no increement\n");
        break;

        case 'A':if(salary>=80000&&salary<160000)
        {
            increement=salary*0.04;
            total salary=salary+increement;
            printf("total_salary is %2f\n",total salary);
        }
        else if(salary>=50000&&salary<80000)
        {
            increement=salary*0.05;
            total salary=salary+increement;
            printf("total_salary is %2f\n",total salary);
        }
        else
            printf("no increement\n");
        break;

        case 'P' if(salary>=100000&&salary<200000)
        {
            increement=salary*0.09;
            total salary=salary+increement;
            printf("total_salary is%2f\n",total salary);
        }
        else if (salary>=60000&&salary<80000)
        {
            increement=salary*0.07;
            total salary=salary+increement;
            printf("total_salary is %2f\n",total salary);
        }
        else if(salary>=40000&&salary<60000)
        {
            increement=salary*0.03;
            total salary=salary+increement;
            printf("total_salary is %2f\n",total salary);
        }
        else
            printf("no increement");
        break;
        default:
            printf("invalid input");



       return 0;
    }
}
