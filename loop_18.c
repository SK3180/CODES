#include <stdio.h>
int main()
{
    int a,i;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter A Number = ");
    scanf("\n%d",&a);
    for(i=2;i<a/2;++i)
    {
        if(a%i==0)
        {
            break;
        }
    }
        if(i>a/2)
        {
            printf("It is Not a Prime No.");
        }
        else
        {
            printf("It is a Prime No.");
        }
    
}