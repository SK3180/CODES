#include<stdio.h>
int main()
{ 
    int a;
    printf("\nName - Sachin Kumar Singh");
    printf("\nRoll no - 24421");
    printf("\nEnter The Number Between 1 to 7 = ");
    scanf("%d",&a);
    switch(a)
{
    case 1: printf("\nMonday"); 
    break;

    case 2: printf("\nTuesday"); 
    break;
    case 3: printf("\nWednesday"); 
    break;
    case 4: printf("\nThursday"); 
    break;
    case 5: printf("\nFriday"); 
    break;
    case 6: printf("\nSaturday"); 
    break;
    case 7: printf("\nSunday"); 
    break;
    

    default:
    printf("\nError! Enter The correct Value");
    break;
}
    
}