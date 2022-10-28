#include <stdio.h>
int main()
{
    printf("Lets Learn About Pointers!!\n");
    int a = 5;
    int *ptr = &a;

    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%p\n", &ptr);
    return 0;
}