#include <stdio.h>
int main()
{
    int p,r,t;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter The Value of P = ");
    scanf("%d",&p);
    printf("\nEnter The Value of R = ");
    scanf("%d",&r);
    printf("\nEnter The Value of T = ");
    scanf("%d",&t);
    int si = (p*r*t)/100;
    printf("\nSI = %d",si);
    return 0;
}