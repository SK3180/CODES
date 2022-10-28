#include <stdio.h>
int main()
{
  int n,p,power = 1;
  printf("\nName - Sachin Kumar Singh");
  printf("\nRoll no - 24421");
  printf("\nEnter The Value = ");
  scanf("%d%d",&n,&p);
  for (int i=1; i<=p; i++)
  {
    power = power*n; 
  }
  {
    printf("%d",power);
  }
}