#include <stdio.h>
int main()
{ //validity of triangle if 3 angles are given
    int a,b,c;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter The 3 Angles of Triangle = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("\nTriangle is Valid");
    }
    else
    {
        printf("\nTriangle is Not Valid");
    }
}