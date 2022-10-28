#include <stdio.h>
int main()
{
    int a,b ,c,type;
    int start;
printf("          Welcome To My Calculator\n");

printf("\nPress 1 to Start\n");
scanf("%d",&start);
if (start==1)
{
    printf("Enter First Number\n");
scanf("%d",&a);
printf("Enter Second Number\n");
scanf("%d",&b);
printf("Press 1 for Addtion\n Press 2 for Substraction\n Press 3 for Multiplication\n Press 4 For Devision\n");
scanf("%d",&type);
switch (type)
{
case 1:
    printf("%d + %d = %d",a,b,a+b);
    break;

case 2:
    printf("%d - %d = %d",a,b,a-b);
    break;

case 3:
    printf("%d x %d = %d",a,b,a*b);
    break;

case 4:
    printf("%d / %d = %d",a,b,a/b);
    break;
default:
printf("Error 404!! You're a Noob\n");
    break;
}
}
else
{
    printf("Error 404!! You're a Noob\n");
}
}

