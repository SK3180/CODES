#include <stdio.h>
#include<math.h>
int main()
{ 
    float a,b,c;
    float root1 ,root2;
    float root_part,deno;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter The 3 Values = ");
    scanf("%d%d%d",&a,&b,&c);
    
    root_part = sqrt(b*b-4*a*c);
    deno = 2*a;

    root1 = (-b + root_part)/deno;
    root2 = (-b - root_part)/deno;
    printf("Root 1 = %f\nRoot2 = %f",root1,root2);
    return 0;
}