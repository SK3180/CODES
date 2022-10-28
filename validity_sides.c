#include <stdio.h>
int main()
{ //validity of triangle if 3 sides are given
    int a,b,c;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter The 3 sides of Triangle = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    {
        if(b+c>a)
        {
            if(c+a>b)
            {
                printf("Triangle is Valid");
            }
        }
    }
    else
        {
            printf("Triangle is Invalid");
        }
}