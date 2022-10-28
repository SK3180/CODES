#include <stdio.h>
void main()
{
    //percentage calculate of 5 subjects
    int m,e,h,s,c;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter The Marks of All Subjects = ");
    scanf("%d%d%d%d%d",&m,&e,&h,&s,&c);
    int p;
    p = (m+e+h+s+c)/5;
    printf("Percentage = %d",p);

}