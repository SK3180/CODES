#include <stdio.h>
float fare(float);
int main()
{
    float n, f;
    printf("Enter the number = ");
    scanf("%f", &n);

    printf("Converted value = %f", fare(n));
}
float fare(float num)
{

    float fn = ((9 * num) / 5) + 32;
    return fn;
}
