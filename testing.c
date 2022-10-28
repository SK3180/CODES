#include<stdio.h>
void main()
{
    // post grad = 1 , grad = 0
    int y;
    char g,q;
    printf("Enter The Year of Service,Gender,Qualification");
    scanf("%d%c%c",&y,&g,&q);
    if(g=='M')
    if(y>=10)
    if(q=='P')
    {
        printf("Salary = 15000");
    }
    else
    {
        printf("Salary = 10000");
    }
    else
    {
        if(q=='p')
        {
            printf("Salary = 10000");
        }
        else
        {
            printf("Salary = 7000");
        }
    }
    else 
    {
        if(y>=10)
        {
            if(q=='p')
            {
                printf("Salary = 12000");
            }
            else
            {
                printf("Salary = 9000");
            }
        }
        else
        {
            if(q=='p')
            {
                printf("Salary = 10000");
            }
            else
            {
                printf("Salary = 6000");
            }
        }
    }

}