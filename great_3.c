#include <stdio.h>
void main()
{
    int a,b,c;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter Three Values = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is The Greatest",a);
        }
        else
        {
            printf("%d is The Greatest",c);
        }

    }
    else
    if(b>c)
    {
        printf("%d is The Greatest",b);
    }
        else
        {
            printf("%d is The Greatest",c);
        }
}   