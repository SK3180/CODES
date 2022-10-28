#include <stdio.h>
int fib(int n);

int main()

{

    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    printf("Number is == %d", fib(n));
}
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}