#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter The Number");
    scanf("%d",&num);
    do
    {
        index = index +1;
        printf("%d",index);
    }while (index<num);

return 0;
}