#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float rootpart,root1,root2;
    float deno;
    printf("Enter 3 Values\n");
    scanf("%f%f%f",&a,&b,&c);
    rootpart = sqrt(b*b-4*a*c);
    deno = 2*a;
    root1 = (-b + rootpart)/deno;
    root2 = (-b - rootpart)/deno;
    printf("Answer = %2f\n%2f",root1,root2); 

}