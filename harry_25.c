#include <stdio.h>
int fibo(int number)
{
    if (number == 1 || number == 2 )
    {
        return number-1;
    }
    else
    {
        return fibo(number-1) + fibo(number-2);
    }
}
int main()
{
    int num;
    printf("Enter The Number You want Fibo of = \n");
    scanf("%d",&num);
    printf("Fibonacci of %d is %d", num, fibo(num));
}

// #include<stdio.h>
// int fibo(int n)
// {
//     int a = 0;
//     int b = 1;
//     for (int i = 0; i < n-1; i++)
//     {
//         b = a+b;
//         a = b-a;
//     }
//     return a;
    
// }
// int main()
// {
//     int num;
//     printf("Enter The Index of Fibo = \n");
//     scanf("%D",&num);
//     printf("Fibonacci of %d is %d \n",num , fibo(num));
// }