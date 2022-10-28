#include <stdio.h>
int main()
{
    //greatest of two number 
    int a,b;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter The Values");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d Is Greatest",a);
    }
    else
    {
        printf("%d Is Greatest",b);
    }
}