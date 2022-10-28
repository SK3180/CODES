#include<stdio.h>
int main()
{ 
    int a , b;
    char c;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nType a for addition");
    printf("\nType s for substraction");
    printf("\nType d for division");
    printf("\nType m for multiplication");
    printf("\nEnter The value for operation = ");
    scanf("%c",&c);
    printf("\nEnter The 2 Values = ");
    scanf("%d%d",&a,&b);

    switch(c)
{
    case 'a': printf("\nThe Addition is = %d", a+b); 
    break;

    case 's': printf("\nThe Substraction is = %d", a-b); 
    break;
    case 'd': printf("\nThe Division is = %d", a/b); 
    break;
    case 'm': printf("\nThe Multiplication is = %d", a*b); 
    break;
    default:
    printf("\nError! Value is not correct");
    break;
}
    
}