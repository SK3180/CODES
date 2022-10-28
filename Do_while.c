#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter The Number");
    scanf("%d", &a);
    do
    {
        b = b + 1;
        printf("\n%d", b);
    } while (b< a);
}